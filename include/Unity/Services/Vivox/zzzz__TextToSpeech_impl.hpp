#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Vivox/zzzz__TextToSpeechMessageType_impl.hpp"
#include "Unity/Services/Vivox/zzzz__TextToSpeech_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/ComponentModel/zzzz__INotifyPropertyChanged_def.hpp"
#include "System/ComponentModel/zzzz__PropertyChangedEventHandler_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Unity/Services/Vivox/zzzz__Client_def.hpp"
#include "Unity/Services/Vivox/zzzz__ITTSMessageQueue_def.hpp"
#include "Unity/Services/Vivox/zzzz__ITTSVoice_def.hpp"
#include "Unity/Services/Vivox/zzzz__ITextToSpeech_def.hpp"
#include "Unity/Services/Vivox/zzzz__TTSMessageQueue_def.hpp"
#include "Unity/Services/Vivox/zzzz__TTSMessage_def.hpp"
#include "Unity/Services/Vivox/zzzz__TTSVoice_def.hpp"
#include "Unity/Services/Vivox/zzzz__TextToSpeechMessageType_def.hpp"
#include "Unity/Services/Vivox/zzzz__TextToSpeech_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_base_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_tts_status_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_tts_voice_t_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::__TextToSpeech____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__TextToSpeech____c::*)()>(&::Unity::Services::Vivox::__TextToSpeech____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2caf8c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__TextToSpeech____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::__TextToSpeech____c._get_AvailableVoices_b__14_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::TTSVoice* (
    ::Unity::Services::Vivox::__TextToSpeech____c::*)(::Unity::Services::Vivox::vx_tts_voice_t*)>(&::Unity::Services::Vivox::__TextToSpeech____c::_get_AvailableVoices_b__14_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2caf8cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__TextToSpeech____c*>::get(), "<get_AvailableVoices>b__14_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_tts_voice_t*>::get() })));
    return ___internal_method;
  }
};
inline void Unity::Services::Vivox::__TextToSpeech____c::setStaticF___9(::Unity::Services::Vivox::__TextToSpeech____c* value) {
  ::cordl_internals::setStaticField<::Unity::Services::Vivox::__TextToSpeech____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__TextToSpeech____c*>::get>(
      std::forward<::Unity::Services::Vivox::__TextToSpeech____c*>(value));
}
inline ::Unity::Services::Vivox::__TextToSpeech____c* Unity::Services::Vivox::__TextToSpeech____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Unity::Services::Vivox::__TextToSpeech____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__TextToSpeech____c*>::get>();
}
inline void Unity::Services::Vivox::__TextToSpeech____c::setStaticF___9__14_0(::System::Func_2<::Unity::Services::Vivox::vx_tts_voice_t*, ::Unity::Services::Vivox::TTSVoice*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Unity::Services::Vivox::vx_tts_voice_t*, ::Unity::Services::Vivox::TTSVoice*>*, "<>9__14_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__TextToSpeech____c*>::get>(
      std::forward<::System::Func_2<::Unity::Services::Vivox::vx_tts_voice_t*, ::Unity::Services::Vivox::TTSVoice*>*>(value));
}
inline ::System::Func_2<::Unity::Services::Vivox::vx_tts_voice_t*, ::Unity::Services::Vivox::TTSVoice*>* Unity::Services::Vivox::__TextToSpeech____c::getStaticF___9__14_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Unity::Services::Vivox::vx_tts_voice_t*, ::Unity::Services::Vivox::TTSVoice*>*, "<>9__14_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__TextToSpeech____c*>::get>();
}
inline ::Unity::Services::Vivox::__TextToSpeech____c* Unity::Services::Vivox::__TextToSpeech____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::__TextToSpeech____c*>());
}
inline void Unity::Services::Vivox::__TextToSpeech____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__TextToSpeech____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::TTSVoice* Unity::Services::Vivox::__TextToSpeech____c::_get_AvailableVoices_b__14_0(::Unity::Services::Vivox::vx_tts_voice_t* v) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__TextToSpeech____c*>::get(), "<get_AvailableVoices>b__14_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_tts_voice_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::TTSVoice*, false>(this, ___internal_method, v);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::__TextToSpeech____c::__TextToSpeech____c() {}
//  Writing Method size for method: ::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass17_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass17_0::*)()>(
    &::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass17_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2caf1c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass17_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass17_0._set_CurrentVoice_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass17_0::*)(::Unity::Services::Vivox::ITTSVoice*)>(
    &::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass17_0::_set_CurrentVoice_b__0)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2caf978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass17_0*>::get(), "<set_CurrentVoice>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::ITTSVoice*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Vivox::ITTSVoice*& Unity::Services::Vivox::__TextToSpeech____c__DisplayClass17_0::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::ITTSVoice*> const& Unity::Services::Vivox::__TextToSpeech____c__DisplayClass17_0::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void Unity::Services::Vivox::__TextToSpeech____c__DisplayClass17_0::__cordl_internal_set_value(::Unity::Services::Vivox::ITTSVoice* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass17_0* Unity::Services::Vivox::__TextToSpeech____c__DisplayClass17_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass17_0*>());
}
inline void Unity::Services::Vivox::__TextToSpeech____c__DisplayClass17_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass17_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Unity::Services::Vivox::__TextToSpeech____c__DisplayClass17_0::_set_CurrentVoice_b__0(::Unity::Services::Vivox::ITTSVoice* v) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass17_0*>::get(), "<set_CurrentVoice>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::ITTSVoice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, v);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass17_0::__TextToSpeech____c__DisplayClass17_0() {}
//  Writing Method size for method: ::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass24_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass24_0::*)()>(
    &::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass24_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2caf850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass24_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass24_0._GetMessagesFromDestination_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass24_0::*)(::Unity::Services::Vivox::TTSMessage*)>(
    &::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass24_0::_GetMessagesFromDestination_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2cafa8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass24_0*>::get(), "<GetMessagesFromDestination>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::TTSMessage*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Vivox::TextToSpeechMessageType& Unity::Services::Vivox::__TextToSpeech____c__DisplayClass24_0::__cordl_internal_get_messageType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageType;
}
constexpr ::Unity::Services::Vivox::TextToSpeechMessageType const& Unity::Services::Vivox::__TextToSpeech____c__DisplayClass24_0::__cordl_internal_get_messageType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageType;
}
constexpr void Unity::Services::Vivox::__TextToSpeech____c__DisplayClass24_0::__cordl_internal_set_messageType(::Unity::Services::Vivox::TextToSpeechMessageType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___messageType = value;
}
inline ::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass24_0* Unity::Services::Vivox::__TextToSpeech____c__DisplayClass24_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass24_0*>());
}
inline void Unity::Services::Vivox::__TextToSpeech____c__DisplayClass24_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass24_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Unity::Services::Vivox::__TextToSpeech____c__DisplayClass24_0::_GetMessagesFromDestination_b__0(::Unity::Services::Vivox::TTSMessage* m) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass24_0*>::get(), "<GetMessagesFromDestination>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::TTSMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, m);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass24_0::__TextToSpeech____c__DisplayClass24_0() {}
//  Writing Method size for method: ::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass29_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass29_0::*)()>(
    &::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass29_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2caf858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass29_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass29_0._GetTTSMessageFromEvt_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass29_0::*)(::Unity::Services::Vivox::TTSMessage*)>(
    &::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass29_0::_GetTTSMessageFromEvt_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2cafab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass29_0*>::get(), "<GetTTSMessageFromEvt>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::TTSMessage*>::get() })));
    return ___internal_method;
  }
};
constexpr uint32_t& Unity::Services::Vivox::__TextToSpeech____c__DisplayClass29_0::__cordl_internal_get_utteranceId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___utteranceId;
}
constexpr uint32_t const& Unity::Services::Vivox::__TextToSpeech____c__DisplayClass29_0::__cordl_internal_get_utteranceId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___utteranceId;
}
constexpr void Unity::Services::Vivox::__TextToSpeech____c__DisplayClass29_0::__cordl_internal_set_utteranceId(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___utteranceId = value;
}
inline ::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass29_0* Unity::Services::Vivox::__TextToSpeech____c__DisplayClass29_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass29_0*>());
}
inline void Unity::Services::Vivox::__TextToSpeech____c__DisplayClass29_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass29_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Unity::Services::Vivox::__TextToSpeech____c__DisplayClass29_0::_GetTTSMessageFromEvt_b__0(::Unity::Services::Vivox::TTSMessage* m) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass29_0*>::get(), "<GetTTSMessageFromEvt>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::TTSMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, m);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass29_0::__TextToSpeech____c__DisplayClass29_0() {}
//  Writing Method size for method: ::Unity::Services::Vivox::TextToSpeech._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::TextToSpeech::*)(::Unity::Services::Vivox::Client*)>(
    &::Unity::Services::Vivox::TextToSpeech::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2cae668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::Client*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::TextToSpeech.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::TextToSpeech::*)()>(&::Unity::Services::Vivox::TextToSpeech::Finalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2cae790;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::TextToSpeech.InstanceOnEventMessageReceived
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::TextToSpeech::*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::TextToSpeech::InstanceOnEventMessageReceived)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2cae908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), "InstanceOnEventMessageReceived", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::TextToSpeech.HandleTTSInjectionStarted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::TextToSpeech::*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::TextToSpeech::HandleTTSInjectionStarted)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2cae98c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), "HandleTTSInjectionStarted", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::TextToSpeech.HandleTTSInjectionEnded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::TextToSpeech::*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::TextToSpeech::HandleTTSInjectionEnded)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2caea24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), "HandleTTSInjectionEnded", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::TextToSpeech.HandleTTSInjectionFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::TextToSpeech::*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::TextToSpeech::HandleTTSInjectionFailed)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2caea74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), "HandleTTSInjectionFailed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::TextToSpeech.add_PropertyChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::TextToSpeech::*)(::System::ComponentModel::PropertyChangedEventHandler*)>(
    &::Unity::Services::Vivox::TextToSpeech::add_PropertyChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2caec08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), "add_PropertyChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyChangedEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::TextToSpeech.remove_PropertyChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::TextToSpeech::*)(::System::ComponentModel::PropertyChangedEventHandler*)>(
    &::Unity::Services::Vivox::TextToSpeech::remove_PropertyChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2caeca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), "remove_PropertyChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyChangedEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::TextToSpeech.get_AvailableVoices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::ITTSVoice*>* (
    ::Unity::Services::Vivox::TextToSpeech::*)()>(&::Unity::Services::Vivox::TextToSpeech::get_AvailableVoices)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x2caed40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(),
                                                                               "get_AvailableVoices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::TextToSpeech.get_CurrentVoice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::ITTSVoice* (::Unity::Services::Vivox::TextToSpeech::*)()>(
    &::Unity::Services::Vivox::TextToSpeech::get_CurrentVoice)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2cae294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(),
                                                                               "get_CurrentVoice", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::TextToSpeech.set_CurrentVoice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::TextToSpeech::*)(::Unity::Services::Vivox::ITTSVoice*)>(
    &::Unity::Services::Vivox::TextToSpeech::set_CurrentVoice)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x2caef5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), "set_CurrentVoice", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::ITTSVoice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::TextToSpeech.Speak
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::TextToSpeech::*)(::Unity::Services::Vivox::TTSMessage*)>(
    &::Unity::Services::Vivox::TextToSpeech::Speak)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2caf1d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), "Speak", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::TTSMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::TextToSpeech.CancelMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::TextToSpeech::*)(::Unity::Services::Vivox::TTSMessage*)>(
    &::Unity::Services::Vivox::TextToSpeech::CancelMessage)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2caf1e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), "CancelMessage", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::TTSMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::TextToSpeech.CancelDestination
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::TextToSpeech::*)(::Unity::Services::Vivox::TextToSpeechMessageType)>(
    &::Unity::Services::Vivox::TextToSpeech::CancelDestination)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x2caf2b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), "CancelDestination", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::TextToSpeechMessageType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::TextToSpeech.CancelAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::TextToSpeech::*)()>(&::Unity::Services::Vivox::TextToSpeech::CancelAll)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2caf748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), "CancelAll",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::TextToSpeech.get_Messages
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::ITTSMessageQueue* (::Unity::Services::Vivox::TextToSpeech::*)()>(
    &::Unity::Services::Vivox::TextToSpeech::get_Messages)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2caf848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), "get_Messages",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::TextToSpeech.GetMessagesFromDestination
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::TTSMessage*>* (
    ::Unity::Services::Vivox::TextToSpeech::*)(::Unity::Services::Vivox::TextToSpeechMessageType)>(&::Unity::Services::Vivox::TextToSpeech::GetMessagesFromDestination)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2caf634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), "GetMessagesFromDestination", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::TextToSpeechMessageType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::TextToSpeech.get_TTSManagerId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::Unity::Services::Vivox::TextToSpeech::*)()>(&::Unity::Services::Vivox::TextToSpeech::get_TTSManagerId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2cae39c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(),
                                                                               "get_TTSManagerId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::TextToSpeech.TTSInitialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Vivox::TextToSpeech::*)()>(&::Unity::Services::Vivox::TextToSpeech::TTSInitialize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2cae278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), "TTSInitialize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::TextToSpeech.IsNotTTSError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Unity::Services::Vivox::vx_tts_status)>(&::Unity::Services::Vivox::TextToSpeech::IsNotTTSError)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2cae3b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), "IsNotTTSError", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_tts_status>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::TextToSpeech.GetTTSMessageFromEvt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::TTSMessage* (::Unity::Services::Vivox::TextToSpeech::*)(uint32_t)>(
    &::Unity::Services::Vivox::TextToSpeech::GetTTSMessageFromEvt)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2caeb30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), "GetTTSMessageFromEvt",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::TextToSpeech.CleanupTTS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::TextToSpeech::*)()>(&::Unity::Services::Vivox::TextToSpeech::CleanupTTS)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2cae824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), "CleanupTTS",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Vivox::ITextToSpeech"
constexpr Unity::Services::Vivox::TextToSpeech::operator ::Unity::Services::Vivox::ITextToSpeech*() noexcept {
  return static_cast<::Unity::Services::Vivox::ITextToSpeech*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Vivox::ITextToSpeech"
constexpr ::Unity::Services::Vivox::ITextToSpeech* Unity::Services::Vivox::TextToSpeech::i___Unity__Services__Vivox__ITextToSpeech() noexcept {
  return static_cast<::Unity::Services::Vivox::ITextToSpeech*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
constexpr Unity::Services::Vivox::TextToSpeech::operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept {
  return static_cast<::System::ComponentModel::INotifyPropertyChanged*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
constexpr ::System::ComponentModel::INotifyPropertyChanged* Unity::Services::Vivox::TextToSpeech::i___System__ComponentModel__INotifyPropertyChanged() noexcept {
  return static_cast<::System::ComponentModel::INotifyPropertyChanged*>(static_cast<void*>(this));
}
constexpr ::Unity::Services::Vivox::Client*& Unity::Services::Vivox::TextToSpeech::__cordl_internal_get__client() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____client;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::Client*> const& Unity::Services::Vivox::TextToSpeech::__cordl_internal_get__client() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____client;
}
constexpr void Unity::Services::Vivox::TextToSpeech::__cordl_internal_set__client(::Unity::Services::Vivox::Client* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____client)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Unity::Services::Vivox::ITTSVoice*>*& Unity::Services::Vivox::TextToSpeech::__cordl_internal_get__ttsAvailableVoices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ttsAvailableVoices;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Unity::Services::Vivox::ITTSVoice*>*> const&
Unity::Services::Vivox::TextToSpeech::__cordl_internal_get__ttsAvailableVoices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ttsAvailableVoices;
}
constexpr void Unity::Services::Vivox::TextToSpeech::__cordl_internal_set__ttsAvailableVoices(::System::Collections::Generic::List_1<::Unity::Services::Vivox::ITTSVoice*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ttsAvailableVoices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::TTSVoice*& Unity::Services::Vivox::TextToSpeech::__cordl_internal_get__ttsCurrentVoice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ttsCurrentVoice;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::TTSVoice*> const& Unity::Services::Vivox::TextToSpeech::__cordl_internal_get__ttsCurrentVoice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ttsCurrentVoice;
}
constexpr void Unity::Services::Vivox::TextToSpeech::__cordl_internal_set__ttsCurrentVoice(::Unity::Services::Vivox::TTSVoice* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ttsCurrentVoice)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::TTSMessageQueue*& Unity::Services::Vivox::TextToSpeech::__cordl_internal_get__ttsMessages() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ttsMessages;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::TTSMessageQueue*> const& Unity::Services::Vivox::TextToSpeech::__cordl_internal_get__ttsMessages() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ttsMessages;
}
constexpr void Unity::Services::Vivox::TextToSpeech::__cordl_internal_set__ttsMessages(::Unity::Services::Vivox::TTSMessageQueue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ttsMessages)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::ComponentModel::PropertyChangedEventHandler*& Unity::Services::Vivox::TextToSpeech::__cordl_internal_get_PropertyChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PropertyChanged;
}
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyChangedEventHandler*> const& Unity::Services::Vivox::TextToSpeech::__cordl_internal_get_PropertyChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PropertyChanged;
}
constexpr void Unity::Services::Vivox::TextToSpeech::__cordl_internal_set_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PropertyChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Vivox::TextToSpeech* Unity::Services::Vivox::TextToSpeech::New_ctor(::Unity::Services::Vivox::Client* client) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::TextToSpeech*>(client));
}
inline void Unity::Services::Vivox::TextToSpeech::_ctor(::Unity::Services::Vivox::Client* client) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::Client*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, client);
}
inline void Unity::Services::Vivox::TextToSpeech::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::TextToSpeech::InstanceOnEventMessageReceived(::Unity::Services::Vivox::vx_evt_base_t* eventMessage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), "InstanceOnEventMessageReceived", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventMessage);
}
inline void Unity::Services::Vivox::TextToSpeech::HandleTTSInjectionStarted(::Unity::Services::Vivox::vx_evt_base_t* eventMessage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), "HandleTTSInjectionStarted", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventMessage);
}
inline void Unity::Services::Vivox::TextToSpeech::HandleTTSInjectionEnded(::Unity::Services::Vivox::vx_evt_base_t* eventMessage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), "HandleTTSInjectionEnded", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventMessage);
}
inline void Unity::Services::Vivox::TextToSpeech::HandleTTSInjectionFailed(::Unity::Services::Vivox::vx_evt_base_t* eventMessage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), "HandleTTSInjectionFailed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventMessage);
}
inline void Unity::Services::Vivox::TextToSpeech::add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), "add_PropertyChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyChangedEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::Vivox::TextToSpeech::remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), "remove_PropertyChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyChangedEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::ITTSVoice*>* Unity::Services::Vivox::TextToSpeech::get_AvailableVoices() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(),
                                                                             "get_AvailableVoices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::ITTSVoice*>*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::ITTSVoice* Unity::Services::Vivox::TextToSpeech::get_CurrentVoice() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), "get_CurrentVoice",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::ITTSVoice*, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::TextToSpeech::set_CurrentVoice(::Unity::Services::Vivox::ITTSVoice* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), "set_CurrentVoice", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::ITTSVoice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::Vivox::TextToSpeech::Speak(::Unity::Services::Vivox::TTSMessage* message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), "Speak", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::TTSMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void Unity::Services::Vivox::TextToSpeech::CancelMessage(::Unity::Services::Vivox::TTSMessage* message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), "CancelMessage", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::TTSMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void Unity::Services::Vivox::TextToSpeech::CancelDestination(::Unity::Services::Vivox::TextToSpeechMessageType messageType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), "CancelDestination", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::TextToSpeechMessageType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, messageType);
}
inline void Unity::Services::Vivox::TextToSpeech::CancelAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), "CancelAll",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::ITTSMessageQueue* Unity::Services::Vivox::TextToSpeech::get_Messages() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), "get_Messages",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::ITTSMessageQueue*, false>(this, ___internal_method);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::TTSMessage*>*
Unity::Services::Vivox::TextToSpeech::GetMessagesFromDestination(::Unity::Services::Vivox::TextToSpeechMessageType messageType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), "GetMessagesFromDestination", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::TextToSpeechMessageType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::TTSMessage*>*, false>(this, ___internal_method, messageType);
}
inline uint32_t Unity::Services::Vivox::TextToSpeech::get_TTSManagerId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), "get_TTSManagerId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline bool Unity::Services::Vivox::TextToSpeech::TTSInitialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), "TTSInitialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Unity::Services::Vivox::TextToSpeech::IsNotTTSError(::Unity::Services::Vivox::vx_tts_status status) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), "IsNotTTSError", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_tts_status>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, status);
}
inline ::Unity::Services::Vivox::TTSMessage* Unity::Services::Vivox::TextToSpeech::GetTTSMessageFromEvt(uint32_t utteranceId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), "GetTTSMessageFromEvt",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::TTSMessage*, false>(this, ___internal_method, utteranceId);
}
inline void Unity::Services::Vivox::TextToSpeech::CleanupTTS() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::TextToSpeech*>::get(), "CleanupTTS",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::TextToSpeech::TextToSpeech() {}
