﻿#pragma once
//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------


namespace Windows {
    namespace UI {
        namespace Xaml {
            namespace Controls {
                ref class Grid;
                ref class Button;
                ref class TextBlock;
            }
        }
    }
}

namespace VBA10
{
    [::Windows::Foundation::Metadata::WebHostHidden]
    partial ref class ImportPage : public ::Windows::UI::Xaml::Controls::Page, 
        public ::Windows::UI::Xaml::Markup::IComponentConnector,
        public ::Windows::UI::Xaml::Markup::IComponentConnector2
    {
    public:
        void InitializeComponent();
        virtual void Connect(int connectionId, ::Platform::Object^ target);
        virtual ::Windows::UI::Xaml::Markup::IComponentConnector^ GetBindingConnector(int connectionId, ::Platform::Object^ target);
    
    private:
        bool _contentLoaded;
    
        private: ::Windows::UI::Xaml::Controls::Grid^ LayoutRoot;
        private: ::Windows::UI::Xaml::Controls::Grid^ titleBar;
        private: ::Windows::UI::Xaml::Controls::Button^ SignInbtn;
        private: ::Windows::UI::Xaml::Controls::Button^ importOneDriveROMbtn;
        private: ::Windows::UI::Xaml::Controls::Button^ chooseFolderbtn;
        private: ::Windows::UI::Xaml::Controls::Button^ importSavbtn;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ title;
    };
}

