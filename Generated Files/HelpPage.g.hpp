﻿//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#include "pch.h"

#if defined _DEBUG && !defined DISABLE_XAML_GENERATED_BINDING_DEBUG_OUTPUT
extern "C" __declspec(dllimport) int __stdcall IsDebuggerPresent();
#endif

#include "HelpPage.xaml.h"

void ::VBA10::HelpPage::InitializeComponent()
{
    if (_contentLoaded)
    {
        return;
    }
    _contentLoaded = true;
    ::Windows::Foundation::Uri^ resourceLocator = ref new ::Windows::Foundation::Uri(L"ms-appx:///HelpPage.xaml");
    ::Windows::UI::Xaml::Application::LoadComponent(this, resourceLocator, ::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Application);
}

void ::VBA10::HelpPage::Connect(int __connectionId, ::Platform::Object^ __target)
{
    switch (__connectionId)
    {
        case 1:
            {
                this->LayoutRoot = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
            }
            break;
        case 2:
            {
                this->titleBar = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
            }
            break;
        case 3:
            {
                this->versionBlock = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
            }
            break;
        case 4:
            {
                this->contactBlock = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(this->contactBlock))->Tapped += ref new ::Windows::UI::Xaml::Input::TappedEventHandler(this, (void (::VBA10::HelpPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::TappedRoutedEventArgs^))&HelpPage::contactBlock_Tapped);
            }
            break;
        case 5:
            {
                this->gplButton = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->gplButton))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::VBA10::HelpPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&HelpPage::gplButton_Click);
            }
            break;
        case 6:
            {
                this->title = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
            }
            break;
    }
    _contentLoaded = true;
}

::Windows::UI::Xaml::Markup::IComponentConnector^ ::VBA10::HelpPage::GetBindingConnector(int __connectionId, ::Platform::Object^ __target)
{
    __connectionId;         // unreferenced
    __target;               // unreferenced
    return nullptr;
}

