# Arma3-exile ![Arma 1.64](https://img.shields.io/badge/Arma-1.64-blue.svg?style=plastic) ![Exile 1.0.2](https://img.shields.io/badge/Exile-1.0.2-C72651.svg?style=plastic) ![Build Version](https://img.shields.io/badge/Build_Version-3.0.2b-lightgrey.svg?style=plastic) ![Build Status](https://img.shields.io/badge/Build-Development-orange.svg?style=plastic)

###Mods needed

* [Exile](http://www.exilemod.com/)
* [CUP Terrains - Core](http://steamcommunity.com/sharedfiles/filedetails/?id=583496184)
* [Esseker](http://steamcommunity.com/sharedfiles/filedetails/?id=498101407)
* [Zombies And Demons](http://steamcommunity.com/sharedfiles/filedetails/?id=501966277)
* [RHS: Armed Forces of the Russian Federation](http://www.rhsmods.org/mod/1)
* [RHS: United States Armed Forces](http://www.rhsmods.org/mod/2)
* [CBA_A3](http://steamcommunity.com/workshop/filedetails/?id=450814997)
* [CUP Weapons](http://steamcommunity.com/sharedfiles/filedetails/?id=497660133)
* [CUP Units](http://steamcommunity.com/sharedfiles/filedetails/?id=497661914)
* [CUP Vehicles](http://steamcommunity.com/sharedfiles/filedetails/?id=541888371)
* [InfiStar](http://infistar.de) (Recommended)(Not included)

###Script used

* [Bjanski/ExAd](https://github.com/Bjanski/ExAd)
* [happydayz-enigma/Enigma_Exile_Revive](https://github.com/happydayz-enigma/Enigma_Exile_Revive)
* [Defent/DMS_Exile](https://github.com/Defent/DMS_Exile)
* [osuapoc/APOCAirdropAssistanceExile](https://github.com/osuapoc/APOCAirdropAssistanceExile)
* [patrix87/ExileZ-2](https://github.com/patrix87/ExileZ-2)
* [StokesMagee/Exile_SM_Towing](https://github.com/StokesMagee/Exile_SM_Towing)
* [CRE4MPIE/StatusBar](https://github.com/CRE4MPIE/StatusBar)
* Draco Custom!!!

##Installing

###Mod Folders
```
@CUPTerrains-Core	= CUP Terrains - Core
@Esseker			= Esseker
@Exile				= Exile
@ZombiesAndDemons	= Zombies And Demons
@RHSAFRF			= RHS: Armed Forces of the Russian Federation
@RHSUSAF			= RHS: United States Armed Forces
@CBA_A3				= CBA_A3
@CUPWeapons			= CUP Weapons
@CUPUnits			= CUP Units
@CUPVehicles		= CUP Vehicles
```

###StartServer.bat
```
-mod=@CUPTerrains-Core;@Esseker;@ZombiesandDemons;@RHSAFRF;@RHSUSAF;@CBA_A3;@CUPWeapons;@CUPUnits;@CUPVehicles;@exile;Kart;Mark;Heli;
```

###Edit @ExileServer\config.cfg
```
allowedVoteCmds[] = {}; //No Voteing allowed

class Missions
{
	class Exile
	{
/*
		template = Exile.Tanoa;  // Exile.Namalsk, Exile.Altis
*/
		template = Exile.Esseker;
		
		// do NOT use custom difficulties!
		// Use either ExileRegular or ExileHardcore
		// or you will break Exile!
		difficulty = "ExileRegular";
	}; 
};
```

### PBO  files
PBO all folders in ```@ExileServer\addons``` and ```mpmission```  
Get [PBO Manager](http://www.armaholic.com/page.php?id=16369)

### Merge BattlEye Filters
Merge Filters form the "BattlEye" folder.  
You can use a program like [WinMerge](http://winmerge.org/)

### Database
Run the following sql command in you database. 
```sql
ALTER TABLE `vehicle` ADD `territory_id` INT(11) UNSIGNED NULL DEFAULT NULL;
ALTER TABLE `vehicle` ADD CONSTRAINT `vehicle_ibfk_2` FOREIGN KEY (`territory_id`) REFERENCES `territory`(`id`) ON DELETE CASCADE ON UPDATE RESTRICT;
```

### infiSTAR (if installed)
* If you are using infiSTAR and want to keep ```CGM = true;```, then set ```UMW = true;```.
* Add ```'O_HMG_01_high_F'``` to ```_VehicleWhiteList```, as well as any other vehicles you add to DMS that are not whitelisted.
