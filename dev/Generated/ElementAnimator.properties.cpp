// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "ElementAnimator.h"

namespace winrt::Microsoft::UI::Xaml::Controls
{
    CppWinRTActivatableClassWithBasicFactory(ElementAnimator)
}

#include "ElementAnimator.g.cpp"


ElementAnimatorProperties::ElementAnimatorProperties()
    : m_boundsChangeAnimationCompletedEventSource{static_cast<ElementAnimator*>(this)}
    , m_hideAnimationCompletedEventSource{static_cast<ElementAnimator*>(this)}
    , m_showAnimationCompletedEventSource{static_cast<ElementAnimator*>(this)}
{
}

void ElementAnimatorProperties::EnsureProperties()
{
}

void ElementAnimatorProperties::ClearProperties()
{
}

winrt::event_token ElementAnimatorProperties::BoundsChangeAnimationCompleted(winrt::ElementAnimationCompleted const& value)
{
    return m_boundsChangeAnimationCompletedEventSource.add(value);
}

void ElementAnimatorProperties::BoundsChangeAnimationCompleted(winrt::event_token const& token)
{
    m_boundsChangeAnimationCompletedEventSource.remove(token);
}

winrt::event_token ElementAnimatorProperties::HideAnimationCompleted(winrt::ElementAnimationCompleted const& value)
{
    return m_hideAnimationCompletedEventSource.add(value);
}

void ElementAnimatorProperties::HideAnimationCompleted(winrt::event_token const& token)
{
    m_hideAnimationCompletedEventSource.remove(token);
}

winrt::event_token ElementAnimatorProperties::ShowAnimationCompleted(winrt::ElementAnimationCompleted const& value)
{
    return m_showAnimationCompletedEventSource.add(value);
}

void ElementAnimatorProperties::ShowAnimationCompleted(winrt::event_token const& token)
{
    m_showAnimationCompletedEventSource.remove(token);
}
