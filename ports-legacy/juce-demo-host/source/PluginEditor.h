/*
  ==============================================================================

    This file was auto-generated by the Jucer!

    It contains the basic startup code for a Juce application.

  ==============================================================================
*/

#ifndef __PLUGINEDITOR_H_4ACCBAA__
#define __PLUGINEDITOR_H_4ACCBAA__

#include "JuceHeader.h"
#include "PluginProcessor.h"
#include "MainHostWindow.h"


//==============================================================================
/** This is the editor component that our filter will display.
*/
class JuceDemoHostAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    JuceDemoHostAudioProcessorEditor (JuceDemoHostAudioProcessor&);
    ~JuceDemoHostAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    ScopedPointer<ResizableCornerComponent> resizer;
    ComponentBoundsConstrainer resizeLimits;

    ScopedPointer<MenuBarComponent> menu;
    ScopedPointer<MainHostWindow> window;

    //==============================================================================
    JuceDemoHostAudioProcessor& getProcessor() const
    {
        return static_cast<JuceDemoHostAudioProcessor&> (processor);
    }
};


#endif  // __PLUGINEDITOR_H_4ACCBAA__
