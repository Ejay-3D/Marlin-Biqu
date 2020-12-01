# Marlin 3D Printer Firmware for BIQU B1

GitHub] (https://img.shields.io/github/license/marlinfirmware/marlin.svg)
! [contributeurs GitHub](https://img.shields.io/github/contributors/marlinfirmware/marlin.svg)
[Date de sortie de GitHub](https://img.shields.io/github/release-date/marlinfirmware/marlin.svg)
[ ! [Statut de construction](https://github.com/MarlinFirmware/Marlin/workflows/CI/badge.svg?branch=bugfix-2.0.x)](https://github.com/MarlinFirmware/Marlin/actions)


Vous êtes ici parce que vous cherchez le dernier firmware BIQU B1 et vous trouverez, nous l'espérons, ce que vous cherchez ! Lisez ci-dessous pour savoir comment.

## Versions actuelles de Marlin et TFT

Les fichiers de ce repository contiennent la source, les configurations et le micrologiciel compilé pour Marlin : 2.0.7.2

Le microprogramme de ce repository utilise des versions modifiées des fichiers de configuration standard de Marlin créés par le talentueux @thiskeithb.
Il à été modifié pour les clients 3D Electroshop car les machines montées par 3D electroshop on une EEprom Physique dans la machine. 

Vous trouverez également les dernières versions compilées du micrologiciel TFT qui a été personnalisé pour être utilisé avec la B1.

## Utilisation: 

Les gens aiment ajouter des fonctionnalités à leurs imprimantes. C'est pourquoi il ne peut y avoir un seul micrologiciel Marlin qui satisfasse toutes les variantes de la B1. Cette offre vise à créer un micrologiciel pour les variantes les plus populaires et à le maintenir à jour avec les dernières versions de Marlin.

Chaque variante de B1 est stockée dans un dossier. Vous n'avez pas besoin de connaître grand chose sur github pour savoir comment sélectionner le dossier approprié pour votre imprimante. C'est très facile. Il vous suffit de sélectionner le nom qui correspond le mieux à votre variante de la B1 dans la liste déroulante et vous serez sur la bonne branche.

Les dossiers  ou variantes B1 disponibles sont :

Nom du dossier | Propriétés de la variante
------------ | -------------
B1_STOCK | Si vous avez construit votre B1 à partir de la boîte et que vous n'avez rien fait d'autre, alors cette branche est faite pour vous.
B1_ABL_HIGH_RES | Si vous avez ajouté un capteur ABL (BL Touch ou autre) et que vous souhaitez une résolution plus élevée pour le sondage du lit en raison d'un gauchissement légèrement plus important et que vous êtes heureux de payer une petite pénalité de temps au début de chaque impression, alors cette branche est pour vous. Ceci fait une sonde 4 x 4.

![Etape 1]

Une fois que vous avez sélectionné votre dossier, vous aurez accès au code source (Marlin uniquement) ainsi qu'au fichier binaire compilé (le microprogramme que vous devez mettre sur votre carte SD) pour ce dossier. La plupart d'entre vous ne se soucieront pas du code source et sont là pour le microprogramme compilé, mais j'ai quand même mis le code source à disposition. Pour télécharger le microprogramme pour Marlin, suivez simplement les étapes indiquées dans les images suivantes.

![Étape2]

Pour télécharger le micrologiciel TFT, il suffit de localiser le fichier zip TFT dans le répertoire racine et de le télécharger. Les instructions pour l'installation des deux logiciels suivent.

## Utilisation du microprogramme

Avant d'installer le micrologiciel Marlin, prenez note des points suivants :

1. Les versions ABL de ce micrologiciel utilisent la sonde comme butée de fin de course. Je préfère cette méthode à l'utilisation d'un interrupteur dédié au z-endstop. Cela signifie que vous devrez retirer le montant du z-endstop qui est vissé à l'arrière de l'extrusion 4020 de gauche, en position verticale.
2. Les versions ABL de ce microprogramme sont programmées pour appliquer tous les "z babysteps" au décalage du z. Cela signifie que si vous enregistrez vos babysteps, la buse démarrera toujours au bon endroit pour chaque impression, indépendamment de ce que vous faites à votre lit, à condition de ne pas modifier la position de la touche BL entre les impressions (par exemple, démonter le hotend).
3. Les versions ABL de ce micrologiciel supposent que la sonde est située dans la position où elle est utilisée lors de l'utilisation du support d'impression. Si vous utilisez le support par @thiskeithb de thingiverse qui place la sonde dans le centre avant du support du hotend, vous devrez alors ajuster les décalages de votre sonde z en utilisant l'écran LCD. En utilisant l'interface unifiée, allez dans le menu --> Paramètres --> Machine --> Paramètre --> Décalage de la sonde et changez les valeurs à : X = -1,5 Y = -34 Z = -1,5.

Pour installer Marlin : une fois que vous avez téléchargé le fichier du firmware, il suffit de le copier sur votre carte SD dans la carte mère (pas TFT) et de redémarrer. Une fois que c'est fait, vous devriez avoir un fichier FIRMWARE.CUR sur la carte SD. Cela signifie que cela a fonctionné.

Si vous utilisez une version ABL, vous recevrez un message d'erreur relatif à l'EEPROM dès le démarrage. C'est normal. Il suffit d'entrer dans le terminal et d'envoyer M500 pour l'effacer.

Pour installer le firmware TFT, il suffit de décompresser le contenu du dossier zip et de le copier sur une carte SD. Mettez la carte SD dans la fente TFT SD et redémarrez. 
Vous verrez une série d'images sur le TFT vous montrant l'état de la mise à jour. 

Je recommande d'effectuer un home sur tous les axes directement après l'installation du firmware et d'utiliser votre doigt pour déclencher la sonde sur le chemin du z home. Cela confirmera que la sonde fonctionne bien et évitera que la buse ne s'écrase sur le lit si ce n'est pas le cas.

## Vous voulez aider ?

Si vous souhaitez apporter d'autres modifications à la configuration, vous pouvez nous soumettre des problèmes ou des demandes d'assistance.

Nous espérons que nous serons en mesure d'étendre cette réponse pour inclure des configurations et des builds pour une variété d'implémentations communes de la B1, ce qui évitera beaucoup de frustration aux gens.

## Plateformes supportées

BIQU B1 
## Licence

Marlin est publié sous la [licence GPL] (/LICENSE) parce que nous croyons au développement ouvert. La GPL est assortie de droits et d'obligations. Que vous utilisiez le micrologiciel Marlin comme pilote pour votre o...

Traduit avec www.DeepL.com/Translator (version gratuite)
