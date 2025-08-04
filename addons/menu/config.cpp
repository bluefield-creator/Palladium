
class CfgPatches
{
	class ShanesBlueArchive
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F_Enoch_Loadorder"};
		author = "Anytature"; 	
	};
};
class Attributes;
class RscStandardDisplay;
class RscProgress;
class RscStructuredText;
class RscPicture;
class RscButton;
class RscShortcutButton;
class RscButtonMenu;
class RscButtonMenuOK;
class RscButtonMenuCancel;
class RscText;
class RscVignette;
class RscDisplayGetReady;
class RscActiveText;
class RscListBox;
class RscListNBox;
class RscCombo;
class RscXListBox;
class RscHTML;
class RscPictureKeepAspect;
class RscActivePicture;
class RscMapControl;
class RscControlsGroupNoScrollbars;
class RscControlsGroupNoHScrollbars;
class RscFrame;
class RscTitle;
class CA_Title;
class RscDebugConsole;
class RscTrafficLight;
class RscFeedback;
class RscMessageBox;
class RscControlsGroup;
class RscTextCheckbox;
class RscDisplayInventory_DLCTemplate;
class RscEdit;
class RscCheckBox;
class RscIGProgress;
class RscHitZones;
class RscIGUIText;
class RscIGUIValue;
class RscOpticsValue;
class RscOpticsText;
class Scrollbar;
class RscIGUIShortcutButton;
class RscActivePictureKeepAspect;
class RscTree;
class RscXSliderH;
class RscObject;
class ctrlMenu;
class ctrlStaticPicture;
class RscButtonMenuSteam;
class RscButtonTextOnly;

// Main Menu
class RscMainMenuSpotlight: RscControlsGroupNoScrollbars
{
	show = 0;
	onLoad = "";
};
class RscDisplayMain: RscStandardDisplay
{
    class controlsBackground
    {
        class Picture_quickmods: RscPicture
        {
            idc = -1;
            text = "\blf\palladium\addons\menu\menu.jpg";
            x = "safezoneX";
            y = "safezoneY";
            w = "safezoneW";
            h="safeZoneH";
        };
    };
   class controls {
        class BackgroundSpotlight:RscPicture {
            show=0;
            onload="";
        };
        class BackgroundSpotlightLeft:BackgroundSpotlight {
            show=0;
            onload="";
        };
        class BackgroundSpotlightRight:BackgroundSpotlightLeft {
            show=0;
            onload="";
        };
        class Spotlight1:RscMainMenuSpotlight {
            idc=1021;
            show=0;
            onload="";
        };
        class Spotlight2:RscText {
            idc=1020;
            show=0;
            onload="";
        };
        class Spotlight3:RscMainMenuSpotlight {
            idc=1022;
            show=0;
            onload="";
        };
        class SpotlightPrev:RscActivePictureKeepAspect {
            idc=1060;
            show=0;
            onload="";
        };
        class SpotlightNext:SpotlightPrev {
            show=0;
            onload="";
        };
        class logo:RscActivePicture {
            text="blf\palladium\addons\menu\assets\logo.paa";
            url="";
            tooltip="Hi!!!";
            onButtonClick="";
            onload="";
        };
        class logoApex:logo {
            show=0;
            onload="";
            text="";
        };
        class infomods: RscControlsGroupNoHScrollbars {
            show=0;
        };
        class infoDLCsOwned:infomods {
            show=1;
        };
        class infoDLCs:infoDLCsOwned {
            show=1;
        };
        class infoNews:infomods {
            show=0;
        };
        class infoVersion:infoNews {
            show=0;
        };
     };
  };
