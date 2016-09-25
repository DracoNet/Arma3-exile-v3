/*
	["Category Name",
		[
			["Text displayed to player",	"Name of vehicle or drop box",	cost, "vehicle or supply (use nothing but these two!)", respectThreshold]  //This is an array, use commas between, DUH!
		] //If something breaks with your list of drops, you've likely messed up the nested arrays.
	]
*/

//Also, presently, these are NON-Persistant vehicles.  Meaning that they will not last over a restart.  Keep that in mind with prices.  Later updates I'll set that up, with pin code entry.
["Vehicles Renting",
	[
		["Quadbike", 		"Exile_Bike_QuadBike_White", 		1500, 	"vehicle"],
		["Offroad", 		"Exile_Car_Offroad_Red",			11000, 	"vehicle", 1000],
		["Golf",			"Exile_Car_Golf_Red",				4500, 	"vehicle"],
		["SUV",				"Exile_Car_SUV_Black",				8000, 	"vehicle"]
	]
],

["Weapons",
	[
		["DLC Rifles", 			"airdrop_DLC_Rifles", 			15000, "supply", 2500],
		["DLC LMGs", 			"airdrop_DLC_LMGs", 			15000, "supply", 1000]
	]
],

["Supplies",
	[
		["Food (small)",		"airdrop_FoodSmall",			1000, "supply", 1000],
		["Food (large)",		"airdrop_FoodLarge",			5000, "supply", 1000],
		["Meds",     			"airdrop_Meds",					5000, "supply", 500]
	]
],

["Repair Items",
	[
		["Vehicle (small)",        "airdrop_RepairSmall",             5000, "supply"],
		["Vehicle (large)",        "airdrop_RepairLarge",            10000, "supply"]
	]
],

["Construction Materials",
	[
		["Build Items",        "airdrop_BuildSmall",               25000, "supply"]
	]
]