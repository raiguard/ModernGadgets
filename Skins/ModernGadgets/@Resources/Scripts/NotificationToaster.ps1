[Windows.UI.Notifications.ToastNotificationManager, Windows.UI.Notifications, ContentType = WindowsRuntime]
Add-Type -AssemblyName System.Web -IgnoreWarnings

$app = '{6D809377-6AF0-444B-8957-A3773F02200E}\Rainmeter\Rainmeter.exe'

$notify = [Windows.UI.Notifications.ToastNotificationManager]::CreateToastNotifier($app)

$ToastXml = New-Object -TypeName Windows.Data.Xml.Dom.XmlDocument

function EncodeVar {
	param([string]$name)
	$variableValue = $RmAPI.VariableStr($name)

	If (($variableValue -eq $null) -Or ($variableValue -eq "")) {
		return $null
		
	}
	#$RmAPI.Log("$variableValue")	
	return [System.Web.HttpUtility]::HtmlEncode($variableValue)

}

function ToastIt {
	#Don't matter if empty
	$TitleVar = EncodeVar('NotificationTitle')
	$ContextVar = EncodeVar('NotificationContext')
	$HeroImageVar = EncodeVar('NotificationTopImage')
	$appLogoOverrideVar = EncodeVar('NotificationIcon')
	#Matter if empty
	$ProgressTitleVar = EncodeVar('NotificationProgressBarTitle')
	$ProgressValueVar = EncodeVar('NotificationProgressBarValue')
	$ProgressValueStringOverrideVar = EncodeVar('NotificationProgressBarValueOverride')
	$ProgressStatusVar = EncodeVar('NotificationProgressStatus')
	$ButtonNameVar = EncodeVar('NotificationButtonName')
	$ButtonIconVar = EncodeVar('NotificationButtonIcon')
	$ButtonActionVar = EncodeVar('NotificationButtonAction')
	$ButtonNameVar2 = EncodeVar('NotificationButtonName2')
	$ButtonIconVar2 = EncodeVar('NotificationButtonIcon2')
	$ButtonActionVar2 = EncodeVar('NotificationButtonAction2')
	$ButtonNameVar3 = EncodeVar('NotificationButtonName3')
	$ButtonIconVar3 = EncodeVar('NotificationButtonIcon3')
	$ButtonActionVar3 = EncodeVar('NotificationButtonAction3')
	$ButtonNameVar4 = EncodeVar('NotificationButtonName4')
	$ButtonIconVar4 = EncodeVar('NotificationButtonIcon4')
	$ButtonActionVar4 = EncodeVar('NotificationButtonAction4')
	$ButtonNameVar5 = EncodeVar('NotificationButtonName5')
	$ButtonIconVar5 = EncodeVar('NotificationButtonIcon5')
	$ButtonActionVar5 = EncodeVar('NotificationButtonAction5')

[xml]$ToastTemplate = @"
<toast launch="app-defined-string">
	<visual>
		<binding template="ToastGeneric">
			<text>$TitleVar</text>
			<text>$ContextVar</text>
			<image placement="hero" src="$HeroImageVar"/>
			<image placement="appLogoOverride" hint-crop="circle" src="$appLogoOverrideVar"/>
            $ProgressBar
		</binding>
	</visual>
	<actions>
		$Button
		$Button2
		$Button3
		$Button4
		$Button5
	</actions>
</toast>
"@

$ToastXml.LoadXml($ToastTemplate.OuterXml)
$notify.Show($ToastXml)
}

function Activate-ShowInActionCenter {Set-ItemProperty -Path "HKCU:\Software\Microsoft\Windows\CurrentVersion\Notifications\Settings\{6D809377-6AF0-444B-8957-A3773F02200E}\Rainmeter\Rainmeter.exe" -Name "ShowInActionCenter" -Value "1"}

function Deactivate-ShowInActionCenter {Set-ItemProperty -Path "HKCU:\Software\Microsoft\Windows\CurrentVersion\Notifications\Settings\{6D809377-6AF0-444B-8957-A3773F02200E}\Rainmeter\Rainmeter.exe" -Name "ShowInActionCenter" -Value "0"}

function NotificationProperties {

	$ProgressTitleVar = EncodeVar('NotificationProgressBarTitle')
	$ProgressValueVar = EncodeVar('NotificationProgressBarValue')
	$ProgressValueStringOverrideVar = EncodeVar('NotificationProgressBarValueOverride')
	$ProgressStatusVar = EncodeVar('NotificationProgressStatus')
	$ButtonNameVar = EncodeVar('NotificationButtonName')
	$ButtonIconVar = EncodeVar('NotificationButtonIcon')
	$ButtonActionVar = EncodeVar('NotificationButtonAction')
	$ButtonNameVar2 = EncodeVar('NotificationButtonName2')
	$ButtonIconVar2 = EncodeVar('NotificationButtonIcon2')
	$ButtonActionVar2 = EncodeVar('NotificationButtonAction2')
	$ButtonNameVar3 = EncodeVar('NotificationButtonName3')
	$ButtonIconVar3 = EncodeVar('NotificationButtonIcon3')
	$ButtonActionVar3 = EncodeVar('NotificationButtonAction3')
	$ButtonNameVar4 = EncodeVar('NotificationButtonName4')
	$ButtonIconVar4 = EncodeVar('NotificationButtonIcon4')
	$ButtonActionVar4 = EncodeVar('NotificationButtonAction4')
	$ButtonNameVar5 = EncodeVar('NotificationButtonName5')
	$ButtonIconVar5 = EncodeVar('NotificationButtonIcon5')
	$ButtonActionVar5 = EncodeVar('NotificationButtonAction5')

	if (($ProgressTitleVar -eq $null) -And ($ProgressValueVar -eq $null) -And ($ProgressValueStringOverrideVar -eq $null) -And ($ProgressStatusVar -eq $null)) {
	#$RmAPI.Log("All variables related to the Progress Bar are null, no Progress Bar will be shown")
		$ProgressBar = ''
	}
	else { 
	#$RmAPI.Log("At least one variable related to the Progress Bar is not null, a Progress Bar will be shown")
	$ProgressBar= '<progress title="{0}" value="{1}" valueStringOverride="{2}" status="{3}"/>' -f $ProgressTitleVar,$ProgressValueVar,$ProgressValueStringOverrideVar,$ProgressStatusVar
	}

	if (($ButtonNameVar -eq $null) -And ($ButtonIconVar -eq $null) -And ($ButtonActionVar -eq $null)) {
	#$RmAPI.Log("All variables related to the Button are null, no Button will be shown")
		$Button = ''
	}
	else { 
	#$RmAPI.Log("At least one variable related to the Button is not null, a Button will be shown")
		$Button = '<action content="{0}" imageUri="{1}" arguments="{2}" activationType="protocol"/>' -f $ButtonNameVar,$ButtonIconVar,$ButtonActionVar
	}

	if (($ButtonNameVar2 -eq $null) -And ($ButtonIconVar2 -eq $null) -And ($ButtonActionVar2 -eq $null)) {
	#$RmAPI.Log("All variables related to the Button2 are null, no Button2 will be shown")
		$Button2 = ''
	}
	else { 
	#$RmAPI.Log("At least one variable related to the Button2 is not null, a Button2 will be shown")
		$Button2 = '<action content="{0}" imageUri="{1}" arguments="{2}" activationType="protocol"/>' -f $ButtonNameVar2,$ButtonIconVar2,$ButtonActionVar2
	}

	if (($ButtonNameVar3 -eq $null) -And ($ButtonIconVar3 -eq $null) -And ($ButtonActionVar3 -eq $null)) {
	#$RmAPI.Log("All variables related to the Button3 are null, no Button3 will be shown")
		$Button3 = ''
	}
	else { 
	#$RmAPI.Log("At least one variable related to the Button3 is not null, a Button3 will be shown")
		$Button3 = '<action content="{0}" imageUri="{1}" arguments="{2}" activationType="protocol"/>' -f $ButtonNameVar3,$ButtonIconVar3,$ButtonActionVar3
	}

	if (($ButtonNameVar4 -eq $null) -And ($ButtonIconVar4 -eq $null) -And ($ButtonActionVar4 -eq $null)) {
	#$RmAPI.Log("All variables related to the Button4 are null, no Button4 will be shown")
		$Button4 = ''
	}
	else { 
	#$RmAPI.Log("At least one variable related to the Button4 is not null, a Button4 will be shown")
		$Button4 = '<action content="{0}" imageUri="{1}" arguments="{2}" activationType="protocol"/>' -f $ButtonNameVar4,$ButtonIconVar4,$ButtonActionVar4
	}

	if (($ButtonNameVar5 -eq $null) -And ($ButtonIconVar5 -eq $null) -And ($ButtonActionVar5 -eq $null)) {
	#$RmAPI.Log("All variables related to the Button5 are null, no Button5 will be shown")
		$Button5 = ''
	}
	else { 
	#$RmAPI.Log("At least one variable related to the Button5 is not null, a Button5 will be shown")
		$Button5 = '<action content="{0}" imageUri="{1}" arguments="{2}" activationType="protocol"/>' -f $ButtonNameVar5,$ButtonIconVar5,$ButtonActionVar5
	}

	ToastIt
}
