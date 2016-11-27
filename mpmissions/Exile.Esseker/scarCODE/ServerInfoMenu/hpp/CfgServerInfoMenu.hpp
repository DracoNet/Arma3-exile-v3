class CfgServerInfoMenu
{
   addAction = 1; // Enable/disable action menu item | use 0 to disable | default: 1 (enabled)
   antiHACK = "infiSTAR";
   hostedBy = "GTX";
   ipPort = "193.111.184.21:2402";
   openKey = "User7"; // https://community.bistudio.com/wiki/inputAction/actions
   openAtLogin = no;
   restart = 4; // Amount of hours before server automatically restarts
   serverName = "Rubber Duck Gaming";
   class menuItems
   {
      // title AND content accept formatted text ( since update Oct5.2016 )
      class first
      {
         menuName = "General";
         title = "<t color='#ffffff'>GENERAL INFORMATION</t>";
         content[] = {
            "Welcome To Rubber Duck Gaming Exile Server"
         };
      };
      class second
      {
         menuName = "Rules";
         title = "SERVER RULES";
         content[] = {
            "<t size='1.75'>Rule #1</t><br />Players/admins are NOT permitted to show racism, profanity and disrespect towards any other player/admin in this server.<br />",
            "<t size='1.75'>Rule #2</t><br />No voice transmission over side chat. Adjust your control settings to prevent doing it by accident.<br />",
			"<t size='1.75'>Rule #3</t><br />Do not kill dem bambies. Its just wrong.<br />",
			"<t size='1.75'>BUILDING RULES</t><br />",
			"Build wisely!<br />",
			"Remove all deleted items from the database after 5 days<br />",
			"Remove all territories (and contructions + containers in it) that were not paid after 10 days<br />",
			"Remove all containers outside of territories that have not been used for 10 days<br />",
			"Example: Tents<br />",
			"Remove all constructions outside of territories that are older than 2 days or not moved for 2 days <br />",
			"Example: Work Benches<br />",
			"Remove all vehicles that were not moved/used for 5 days<br />",
			"Set safe as abandoned after 7 days<br />",
			"Deletes a base 5 days after the flag is stolen if the ransom money isn't paid<br />",
			"Sets door & safe pins to 0000 and marks safes to abandoned 5 days after the flag is stolen if the ransom money isn't paid<br />"
         };
      };
      class third
      {
         menuName = "Crafting";
         title = "CRAFTING GUIDE";
         content[] = {"In tablet menu"};
      };
      class fourth
      {
         menuName = "Admins";
         title = "ADMINISTRATORS";
         content[] = {
			 "Dani",
			 "Draco"
		 };
      };
      class fifth
      {
         menuName = "Scripts";
         title = "INSTALLED SCRIPTS";
         content[] = {
			 "<t size='1.25'>ExAd</t> by Bjanski<br />",
			 "<t size='1.25'>Enigma_Exile_Revive</t> by happydayz-enigma<br />",
			 "<t size='1.25'>DMS_Exile</t>by Defent<br />",
			 "<t size='1.25'>APOCAirdropAssistanceExile</t> by osuapoc<br />",
			 "<t size='1.25'>ExileZ-2</t> by patrix87<br />",
			 "<t size='1.25'>Exile_SM_Towing</t> by StokesMagee<br />",
			 "<t size='1.25'>StatusBar</t> by CRE4MPIE<br />",
			 "<t size='1.25'>Server Info Menu</t> by IT07<br />",
			 "<t size='1.25'>Custom!!!</t> by Draco<br />"
		 };
      };
      class sixth
      {
         menuName = "Communication";
         title = "VOICE SERVER";
         content[] = {
            "<t size='1.25'>TeamSpeak:</t> ts.draconet.net"
         };
      };
      class seventh
      {
         menuName = "Credits";
         title = "CREDITS WHERE CREDITS DUE";
         content[] = {
            "<t size='1.25'>Name:</t> Bjanski, happydayz-enigma, IT07,<br />", 
			"Defent, osuapoc, patrix87, StokesMagee, CRE4MPIE, Draco<br />",
			"</ br>",
			"And a special thanks for the players on the server."
         };
      };
   };
};
