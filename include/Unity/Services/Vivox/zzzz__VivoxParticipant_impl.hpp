#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Vivox/zzzz__VivoxParticipant_def.hpp"
#include "System/ComponentModel/zzzz__PropertyChangedEventArgs_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Vivox/zzzz__IParticipant_def.hpp"
#include "Unity/Services/Vivox/zzzz__IVivoxServiceInternal_def.hpp"
#include "Unity/Services/Vivox/zzzz__KeyEventArg_1_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxParticipant._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::VivoxParticipant::*)(
    ::Unity::Services::Vivox::IVivoxServiceInternal*, ::Unity::Services::Vivox::IParticipant*)>(&::Unity::Services::Vivox::VivoxParticipant::_ctor)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x1c152a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::IVivoxServiceInternal*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::IParticipant*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxParticipant.OnParticipantRemoved
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::VivoxParticipant::*)(
    ::System::Object*, ::Unity::Services::Vivox::KeyEventArg_1<::StringW>*)>(&::Unity::Services::Vivox::VivoxParticipant::OnParticipantRemoved)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x1c15774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), "OnParticipantRemoved", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::KeyEventArg_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxParticipant.DestroyTap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::VivoxParticipant::*)()>(&::Unity::Services::Vivox::VivoxParticipant::DestroyTap)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x1c15d14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), "DestroyTap",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxParticipant.OnUserInputDeviceMuteStateChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::VivoxParticipant::*)(bool)>(
    &::Unity::Services::Vivox::VivoxParticipant::OnUserInputDeviceMuteStateChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1c15e9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), "OnUserInputDeviceMuteStateChanged",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxParticipant.OnPropertyChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::VivoxParticipant::*)(
    ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*)>(&::Unity::Services::Vivox::VivoxParticipant::OnPropertyChanged)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1c15eb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), "OnPropertyChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyChangedEventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxParticipant.SetLocalVolume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::VivoxParticipant::*)(int32_t)>(
    &::Unity::Services::Vivox::VivoxParticipant::SetLocalVolume)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x1c1639c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), "SetLocalVolume",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxParticipant.MutePlayerLocally
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::VivoxParticipant::*)()>(
    &::Unity::Services::Vivox::VivoxParticipant::MutePlayerLocally)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1c1656c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(),
                                                                               "MutePlayerLocally", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxParticipant.UnmutePlayerLocally
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::VivoxParticipant::*)()>(
    &::Unity::Services::Vivox::VivoxParticipant::UnmutePlayerLocally)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1c16774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(),
                                                                               "UnmutePlayerLocally", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxParticipant.SetLocalMuteState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::VivoxParticipant::*)(bool)>(
    &::Unity::Services::Vivox::VivoxParticipant::SetLocalMuteState)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x1c165d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), "SetLocalMuteState",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxParticipant.ValidateParticipant
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Vivox::VivoxParticipant::*)(::StringW)>(
    &::Unity::Services::Vivox::VivoxParticipant::ValidateParticipant)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1c164a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), "ValidateParticipant",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxParticipant.CreateVivoxParticipantTap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::Unity::Services::Vivox::VivoxParticipant::*)(::StringW, bool)>(
    &::Unity::Services::Vivox::VivoxParticipant::CreateVivoxParticipantTap)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x1c168fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), "CreateVivoxParticipantTap", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxParticipant.DestroyVivoxParticipantTap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::VivoxParticipant::*)()>(
    &::Unity::Services::Vivox::VivoxParticipant::DestroyVivoxParticipantTap)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1c15e0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(),
                                                                               "DestroyVivoxParticipantTap", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxParticipant.get_DisplayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Vivox::VivoxParticipant::*)()>(
    &::Unity::Services::Vivox::VivoxParticipant::get_DisplayName)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1c16e2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(),
                                                                               "get_DisplayName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxParticipant.get_PlayerId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Vivox::VivoxParticipant::*)()>(
    &::Unity::Services::Vivox::VivoxParticipant::get_PlayerId)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1c15c64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(),
                                                                               "get_PlayerId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxParticipant.get_URI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Vivox::VivoxParticipant::*)()>(&::Unity::Services::Vivox::VivoxParticipant::get_URI)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x1c17024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), "get_URI",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxParticipant.get_ChannelName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Vivox::VivoxParticipant::*)()>(
    &::Unity::Services::Vivox::VivoxParticipant::get_ChannelName)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x1c16efc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(),
                                                                               "get_ChannelName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxParticipant.get_ChannelURI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Vivox::VivoxParticipant::*)()>(
    &::Unity::Services::Vivox::VivoxParticipant::get_ChannelURI)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x1c170d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(),
                                                                               "get_ChannelURI", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxParticipant.get_SpeechDetected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Vivox::VivoxParticipant::*)()>(
    &::Unity::Services::Vivox::VivoxParticipant::get_SpeechDetected)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x1c17200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(),
                                                                               "get_SpeechDetected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxParticipant.get_IsMuted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Vivox::VivoxParticipant::*)()>(&::Unity::Services::Vivox::VivoxParticipant::get_IsMuted)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x1c16198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(),
                                                                               "get_IsMuted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxParticipant.get_IsSelf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Vivox::VivoxParticipant::*)()>(&::Unity::Services::Vivox::VivoxParticipant::get_IsSelf)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1c160f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), "get_IsSelf",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxParticipant.get_LocalVolume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Services::Vivox::VivoxParticipant::*)()>(
    &::Unity::Services::Vivox::VivoxParticipant::get_LocalVolume)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x1c172a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(),
                                                                               "get_LocalVolume", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxParticipant.get_AudioEnergy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::Unity::Services::Vivox::VivoxParticipant::*)()>(
    &::Unity::Services::Vivox::VivoxParticipant::get_AudioEnergy)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x1c17348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(),
                                                                               "get_AudioEnergy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxParticipant.get_ParticipantTapAudioSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioSource> (::Unity::Services::Vivox::VivoxParticipant::*)()>(
    &::Unity::Services::Vivox::VivoxParticipant::get_ParticipantTapAudioSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1c173ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(),
                                                                               "get_ParticipantTapAudioSource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxParticipant.set_ParticipantTapAudioSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::VivoxParticipant::*)(::UnityEngine::AudioSource*)>(
    &::Unity::Services::Vivox::VivoxParticipant::set_ParticipantTapAudioSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1c173f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), "set_ParticipantTapAudioSource", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxParticipant.add_ParticipantMuteStateChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::VivoxParticipant::*)(::System::Action*)>(
    &::Unity::Services::Vivox::VivoxParticipant::add_ParticipantMuteStateChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1c173fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), "add_ParticipantMuteStateChanged",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxParticipant.remove_ParticipantMuteStateChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::VivoxParticipant::*)(::System::Action*)>(
    &::Unity::Services::Vivox::VivoxParticipant::remove_ParticipantMuteStateChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1c17498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), "remove_ParticipantMuteStateChanged",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxParticipant.add_ParticipantSpeechDetected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::VivoxParticipant::*)(::System::Action*)>(
    &::Unity::Services::Vivox::VivoxParticipant::add_ParticipantSpeechDetected)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1c17534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), "add_ParticipantSpeechDetected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxParticipant.remove_ParticipantSpeechDetected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::VivoxParticipant::*)(::System::Action*)>(
    &::Unity::Services::Vivox::VivoxParticipant::remove_ParticipantSpeechDetected)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1c175d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), "remove_ParticipantSpeechDetected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxParticipant.add_ParticipantAudioEnergyChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::VivoxParticipant::*)(::System::Action*)>(
    &::Unity::Services::Vivox::VivoxParticipant::add_ParticipantAudioEnergyChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1c1766c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), "add_ParticipantAudioEnergyChanged",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxParticipant.remove_ParticipantAudioEnergyChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::VivoxParticipant::*)(::System::Action*)>(
    &::Unity::Services::Vivox::VivoxParticipant::remove_ParticipantAudioEnergyChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1c17708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), "remove_ParticipantAudioEnergyChanged",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Vivox::IVivoxServiceInternal*& Unity::Services::Vivox::VivoxParticipant::__cordl_internal_get_m_VivoxService() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VivoxService;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::IVivoxServiceInternal*> const& Unity::Services::Vivox::VivoxParticipant::__cordl_internal_get_m_VivoxService() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VivoxService;
}
constexpr void Unity::Services::Vivox::VivoxParticipant::__cordl_internal_set_m_VivoxService(::Unity::Services::Vivox::IVivoxServiceInternal* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_VivoxService)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::IParticipant*& Unity::Services::Vivox::VivoxParticipant::__cordl_internal_get_m_ParentParticipant() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParentParticipant;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::IParticipant*> const& Unity::Services::Vivox::VivoxParticipant::__cordl_internal_get_m_ParentParticipant() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParentParticipant;
}
constexpr void Unity::Services::Vivox::VivoxParticipant::__cordl_internal_set_m_ParentParticipant(::Unity::Services::Vivox::IParticipant* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ParentParticipant)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& Unity::Services::Vivox::VivoxParticipant::__cordl_internal_get_m_ParticipantTapGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParticipantTapGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Unity::Services::Vivox::VivoxParticipant::__cordl_internal_get_m_ParticipantTapGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParticipantTapGameObject;
}
constexpr void Unity::Services::Vivox::VivoxParticipant::__cordl_internal_set_m_ParticipantTapGameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ParticipantTapGameObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::AudioSource>& Unity::Services::Vivox::VivoxParticipant::__cordl_internal_get__ParticipantTapAudioSource_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ParticipantTapAudioSource_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& Unity::Services::Vivox::VivoxParticipant::__cordl_internal_get__ParticipantTapAudioSource_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ParticipantTapAudioSource_k__BackingField;
}
constexpr void Unity::Services::Vivox::VivoxParticipant::__cordl_internal_set__ParticipantTapAudioSource_k__BackingField(::UnityW<::UnityEngine::AudioSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ParticipantTapAudioSource_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& Unity::Services::Vivox::VivoxParticipant::__cordl_internal_get_ParticipantMuteStateChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ParticipantMuteStateChanged;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& Unity::Services::Vivox::VivoxParticipant::__cordl_internal_get_ParticipantMuteStateChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ParticipantMuteStateChanged;
}
constexpr void Unity::Services::Vivox::VivoxParticipant::__cordl_internal_set_ParticipantMuteStateChanged(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ParticipantMuteStateChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& Unity::Services::Vivox::VivoxParticipant::__cordl_internal_get_ParticipantSpeechDetected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ParticipantSpeechDetected;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& Unity::Services::Vivox::VivoxParticipant::__cordl_internal_get_ParticipantSpeechDetected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ParticipantSpeechDetected;
}
constexpr void Unity::Services::Vivox::VivoxParticipant::__cordl_internal_set_ParticipantSpeechDetected(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ParticipantSpeechDetected)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& Unity::Services::Vivox::VivoxParticipant::__cordl_internal_get_ParticipantAudioEnergyChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ParticipantAudioEnergyChanged;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& Unity::Services::Vivox::VivoxParticipant::__cordl_internal_get_ParticipantAudioEnergyChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ParticipantAudioEnergyChanged;
}
constexpr void Unity::Services::Vivox::VivoxParticipant::__cordl_internal_set_ParticipantAudioEnergyChanged(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ParticipantAudioEnergyChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Vivox::VivoxParticipant* Unity::Services::Vivox::VivoxParticipant::New_ctor(::Unity::Services::Vivox::IVivoxServiceInternal* vivoxService,
                                                                                                      ::Unity::Services::Vivox::IParticipant* participant) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::VivoxParticipant*>(vivoxService, participant));
}
inline void Unity::Services::Vivox::VivoxParticipant::_ctor(::Unity::Services::Vivox::IVivoxServiceInternal* vivoxService, ::Unity::Services::Vivox::IParticipant* participant) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::IVivoxServiceInternal*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::IParticipant*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vivoxService, participant);
}
inline void Unity::Services::Vivox::VivoxParticipant::OnParticipantRemoved(::System::Object* sender, ::Unity::Services::Vivox::KeyEventArg_1<::StringW>* keyEventArg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), "OnParticipantRemoved", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::KeyEventArg_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, keyEventArg);
}
inline void Unity::Services::Vivox::VivoxParticipant::DestroyTap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), "DestroyTap",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::VivoxParticipant::OnUserInputDeviceMuteStateChanged(bool isMuted) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), "OnUserInputDeviceMuteStateChanged",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isMuted);
}
inline void Unity::Services::Vivox::VivoxParticipant::OnPropertyChanged(::System::Object* obj, ::System::ComponentModel::PropertyChangedEventArgs* args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), "OnPropertyChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyChangedEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, args);
}
inline void Unity::Services::Vivox::VivoxParticipant::SetLocalVolume(int32_t volume) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), "SetLocalVolume",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, volume);
}
inline void Unity::Services::Vivox::VivoxParticipant::MutePlayerLocally() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(),
                                                                             "MutePlayerLocally", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::VivoxParticipant::UnmutePlayerLocally() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(),
                                                                             "UnmutePlayerLocally", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::VivoxParticipant::SetLocalMuteState(bool doMute) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), "SetLocalMuteState",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, doMute);
}
/// @param memberName: ::StringW (default: u"")
inline bool Unity::Services::Vivox::VivoxParticipant::ValidateParticipant(::StringW memberName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), "ValidateParticipant",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, memberName);
}
/// @param gameObjectName: ::StringW (default: u"")
/// @param silenceInChannelAudioMix: bool (default: true)
inline ::UnityW<::UnityEngine::GameObject> Unity::Services::Vivox::VivoxParticipant::CreateVivoxParticipantTap(::StringW gameObjectName, bool silenceInChannelAudioMix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), "CreateVivoxParticipantTap", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method, gameObjectName, silenceInChannelAudioMix);
}
inline void Unity::Services::Vivox::VivoxParticipant::DestroyVivoxParticipantTap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(),
                                                                             "DestroyVivoxParticipantTap", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW Unity::Services::Vivox::VivoxParticipant::get_DisplayName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(),
                                                                             "get_DisplayName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Unity::Services::Vivox::VivoxParticipant::get_PlayerId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), "get_PlayerId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Unity::Services::Vivox::VivoxParticipant::get_URI() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), "get_URI",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Unity::Services::Vivox::VivoxParticipant::get_ChannelName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(),
                                                                             "get_ChannelName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Unity::Services::Vivox::VivoxParticipant::get_ChannelURI() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(),
                                                                             "get_ChannelURI", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool Unity::Services::Vivox::VivoxParticipant::get_SpeechDetected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(),
                                                                             "get_SpeechDetected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Unity::Services::Vivox::VivoxParticipant::get_IsMuted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), "get_IsMuted",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Unity::Services::Vivox::VivoxParticipant::get_IsSelf() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), "get_IsSelf",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t Unity::Services::Vivox::VivoxParticipant::get_LocalVolume() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(),
                                                                             "get_LocalVolume", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline double_t Unity::Services::Vivox::VivoxParticipant::get_AudioEnergy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(),
                                                                             "get_AudioEnergy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AudioSource> Unity::Services::Vivox::VivoxParticipant::get_ParticipantTapAudioSource() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(),
                                                                             "get_ParticipantTapAudioSource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioSource>, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::VivoxParticipant::set_ParticipantTapAudioSource(::UnityEngine::AudioSource* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), "set_ParticipantTapAudioSource", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::Vivox::VivoxParticipant::add_ParticipantMuteStateChanged(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), "add_ParticipantMuteStateChanged",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::Vivox::VivoxParticipant::remove_ParticipantMuteStateChanged(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), "remove_ParticipantMuteStateChanged",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::Vivox::VivoxParticipant::add_ParticipantSpeechDetected(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), "add_ParticipantSpeechDetected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::Vivox::VivoxParticipant::remove_ParticipantSpeechDetected(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), "remove_ParticipantSpeechDetected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::Vivox::VivoxParticipant::add_ParticipantAudioEnergyChanged(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), "add_ParticipantAudioEnergyChanged",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::Vivox::VivoxParticipant::remove_ParticipantAudioEnergyChanged(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxParticipant*>::get(), "remove_ParticipantAudioEnergyChanged",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::VivoxParticipant::VivoxParticipant() {}
