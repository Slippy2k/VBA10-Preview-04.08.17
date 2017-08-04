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
                ref class ToggleSwitch;
                ref class ComboBox;
                ref class StackPanel;
                ref class TextBlock;
                ref class Button;
                ref class TextBox;
                ref class Slider;
                ref class ListBox;
            }
        }
    }
}
namespace Windows {
    namespace UI {
        namespace Xaml {
            namespace Data {
                ref class CollectionViewSource;
            }
        }
    }
}
namespace Windows {
    namespace UI {
        namespace Xaml {
            namespace Controls {
                namespace Primitives {
                    ref class ToggleButton;
                }
            }
        }
    }
}

namespace VBA10
{
    [::Windows::Foundation::Metadata::WebHostHidden]
    partial ref class SettingsPage : public ::Windows::UI::Xaml::Controls::Page, 
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
        private: ::Windows::UI::Xaml::Controls::ToggleSwitch^ soundToggle;
        private: ::Windows::UI::Xaml::Controls::ToggleSwitch^ soundSyncToggle;
        private: ::Windows::UI::Xaml::Controls::ToggleSwitch^ saveConfirmationToggle;
        private: ::Windows::UI::Xaml::Controls::ToggleSwitch^ loadConfirmationToggle;
        private: ::Windows::UI::Xaml::Controls::ComboBox^ cboTheme;
        private: ::Windows::UI::Xaml::Controls::ComboBox^ cboCommandButtonPosition;
        private: ::Windows::UI::Xaml::Controls::ToggleSwitch^ hideHamburgerToggle;
        private: ::Windows::UI::Xaml::Controls::ToggleSwitch^ enableTurboToggle;
        private: ::Windows::UI::Xaml::Controls::ComboBox^ skipComboBox;
        private: ::Windows::UI::Xaml::Controls::ComboBox^ turboSkipComboBox;
        private: ::Windows::UI::Xaml::Controls::ComboBox^ cboPixelFilter;
        private: ::Windows::UI::Xaml::Controls::ComboBox^ cboPixelShader;
        private: ::Windows::UI::Xaml::Controls::ComboBox^ monitorComboBox;
        private: ::Windows::UI::Xaml::Controls::ComboBox^ aspectComboBox;
        private: ::Windows::UI::Xaml::Controls::ToggleSwitch^ fpsToggle;
        private: ::Windows::UI::Xaml::Controls::ToggleSwitch^ fullscreenToggle;
        private: ::Windows::UI::Xaml::Controls::StackPanel^ InputStackPanel;
        private: ::Windows::UI::Xaml::Data::CollectionViewSource^ vsControllerList;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ txtControllerStatus;
        private: ::Windows::UI::Xaml::Controls::Button^ ConfigureXboxBtn;
        private: ::Windows::UI::Xaml::Controls::StackPanel^ panelHIDGamepad;
        private: ::Windows::UI::Xaml::Controls::ComboBox^ cboTurboBehavior;
        private: ::Windows::UI::Xaml::Controls::ToggleSwitch^ touchToggle;
        private: ::Windows::UI::Xaml::Controls::ComboBox^ dpadComboBox;
        private: ::Windows::UI::Xaml::Controls::Button^ editButonLayoutBtn;
        private: ::Windows::UI::Xaml::Controls::TextBox^ leftKeyBox;
        private: ::Windows::UI::Xaml::Controls::TextBox^ upKeyBox;
        private: ::Windows::UI::Xaml::Controls::TextBox^ rightKeyBox;
        private: ::Windows::UI::Xaml::Controls::TextBox^ downKeyBox;
        private: ::Windows::UI::Xaml::Controls::TextBox^ bKeyBox;
        private: ::Windows::UI::Xaml::Controls::TextBox^ aKeyBox;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ lKeyLabel;
        private: ::Windows::UI::Xaml::Controls::TextBox^ lKeyBox;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ rKeyLabel;
        private: ::Windows::UI::Xaml::Controls::TextBox^ rKeyBox;
        private: ::Windows::UI::Xaml::Controls::TextBox^ startKeyBox;
        private: ::Windows::UI::Xaml::Controls::TextBox^ selectKeyBox;
        private: ::Windows::UI::Xaml::Controls::TextBox^ turboModeBox;
        private: ::Windows::UI::Xaml::Controls::Slider^ controllerOpacitySlider;
        private: ::Windows::UI::Xaml::Controls::Primitives::ToggleButton^ controllerOpacityToggle;
        private: ::Windows::UI::Xaml::Controls::Slider^ buttonScaleSlider;
        private: ::Windows::UI::Xaml::Controls::Primitives::ToggleButton^ buttonScaleToggle;
        private: ::Windows::UI::Xaml::Controls::Slider^ controllerScaleSlider;
        private: ::Windows::UI::Xaml::Controls::Primitives::ToggleButton^ controllerScaleToggle;
        private: ::Windows::UI::Xaml::Controls::Slider^ deadzoneSlider;
        private: ::Windows::UI::Xaml::Controls::Primitives::ToggleButton^ deadzoneToggle;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ txtHIDGamepad;
        private: ::Windows::UI::Xaml::Controls::ListBox^ lbHIDGamepad;
        private: ::Windows::UI::Xaml::Controls::Grid^ panelHIDConnect;
        private: ::Windows::UI::Xaml::Controls::Button^ ConfigureBtn;
        private: ::Windows::UI::Xaml::Controls::Button^ ConnectBtn;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ title;
    };
}

