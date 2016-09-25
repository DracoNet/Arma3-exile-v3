/*
	["Category Name",
		[
			["Text displayed to player",	"Name of vehicle or drop box",	cost, "vehicle or supply (use nothing but these two!)", respectThreshold]  //This is an array, use commas between, DUH!
		] //If something breaks with your list of drops, you've likely messed up the nested arrays.
	]
*/
["Donater Packs",
	[
		["Starter Pack",		"airdrop_DonateStart",			1000, "supply"],
		["Build Items", 		"airdrop_DonateBuildLarge",     50000, "supply"]
	]
],

//Also, presently, these are NON-Persistant vehicles.  Meaning that they will not last over a restart.  Keep that in mind with prices.  Later updates I'll set that up, with pin code entry.
["Donater Vehicles Renting",
	[
		["Yamaha Moters",	"Mrshounka_yamaha_p_g",			1200,	"vehicle"],
		["Limo",			"shounka_limo_civ_grise",			5000,	"vehicle"],
		["Strider", 		"Exile_Car_Strider", 				22000, 	"vehicle", 15000],
		["Buggy Armored", 	"Mr_Own_buggy_rouge",				10000, 	"vehicle", 10000]
	]
],

["Donater Weapons",
	[
		["Sniper Rifles", 		"airdrop_Snipers", 				5000, "supply", 15000],
		["Rifles", 				"airdrop_DonateRifles", 		1000, "supply", 5000]
	]
],

// Have to end with , like ],