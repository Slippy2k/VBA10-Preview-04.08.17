﻿//
// HelpPage.xaml.cpp
// Implementation of the HelpPage class
//

#include "pch.h"
#include "App.xaml.h"
#include "HelpPage.xaml.h"
#include <ppltasks.h>

using namespace VBA10;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=234238

HelpPage::HelpPage()
{
	InitializeComponent();

	//get version
	auto myPackage = Windows::ApplicationModel::Package::Current;
	auto version = myPackage->Id->Version;

	auto loader = Windows::ApplicationModel::Resources::ResourceLoader::GetForViewIndependentUse();

	versionBlock->Text = loader->GetString("VersionText") + version.Major + "." + version.Minor + "." + version.Build + "." + version.Revision;

}

void HelpPage::contactBlock_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	auto uri = ref new Windows::Foundation::Uri("mailto:afanyiyu@hotmail.com?subject=VBA10 bug report or feature suggestion&body=");

	// Launch the URI
	concurrency::task<bool> launchUriOperation(Windows::System::Launcher::LaunchUriAsync(uri));
	//launchUriOperation.then([](bool success)
	//{
	//	if (success)
	//	{
	//		// URI launched
	//	}
	//	else
	//	{
	//		// URI launch failed
	//	}
	//});

}


void VBA10::HelpPage::SourceBlock_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	Windows::System::Launcher::LaunchUriAsync(ref new Windows::Foundation::Uri("http://sdrv.ms/10ehg2a"));
}


void VBA10::HelpPage::Gpl_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	Windows::System::Launcher::LaunchUriAsync(ref new Windows::Foundation::Uri("http://www.gnu.org/licenses/gpl-3.0.txt"));
}


void VBA10::HelpPage::GithubOld_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	Windows::System::Launcher::LaunchUriAsync(ref new Windows::Foundation::Uri("https://github.com/duchuule/vba10"));
}


void VBA10::HelpPage::Github_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	Windows::System::Launcher::LaunchUriAsync(
		ref new Windows::Foundation::Uri("https://github.com/Apps-Open-Community/VBA10-Preview"));
}


void VBA10::HelpPage::CheckNewVersion_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	Windows::System::Launcher::LaunchUriAsync(
		ref new Windows::Foundation::Uri("https://github.com/Apps-Open-Community/VBA10-Preview/releases"));
}


void VBA10::HelpPage::TransLate_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	Windows::System::Launcher::LaunchUriAsync(
		ref new Windows::Foundation::Uri("https://github.com/Apps-Open-Community/VBA10-Preview/projects/1"));
}
