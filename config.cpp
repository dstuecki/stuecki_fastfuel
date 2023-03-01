class CfgPatches
{
	class FastFuel
	{
		requiredAddons[]={};
	};
};
class CfgMods
{
	class FastFuel
	{
		type="mod";
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"FastFuel/WorldScripts"
				};
			};
		};
	};
};
