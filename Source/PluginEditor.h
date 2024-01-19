/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class GUERRA_EQAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    GUERRA_EQAudioProcessorEditor (GUERRA_EQAudioProcessor&);
    ~GUERRA_EQAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    GUERRA_EQAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (GUERRA_EQAudioProcessorEditor)
};
