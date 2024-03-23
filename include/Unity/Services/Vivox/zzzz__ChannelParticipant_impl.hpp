#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Vivox/zzzz__ChannelParticipant_def.hpp"
#include "System/ComponentModel/zzzz__INotifyPropertyChanged_def.hpp"
#include "System/ComponentModel/zzzz__PropertyChangedEventHandler_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "Unity/Services/Vivox/zzzz__AccountId_def.hpp"
#include "Unity/Services/Vivox/zzzz__AsyncNoResult_def.hpp"
#include "Unity/Services/Vivox/zzzz__ChannelParticipant_def.hpp"
#include "Unity/Services/Vivox/zzzz__ChannelSession_def.hpp"
#include "Unity/Services/Vivox/zzzz__IChannelSession_def.hpp"
#include "Unity/Services/Vivox/zzzz__IKeyedItemNotifyPropertyChanged_1_def.hpp"
#include "Unity/Services/Vivox/zzzz__IParticipantProperties_def.hpp"
#include "Unity/Services/Vivox/zzzz__IParticipant_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_participant_added_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_req_channel_mute_user_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_req_session_set_participant_mute_for_me_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_req_session_set_participant_volume_for_me_t_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass26_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass26_0::*)()>(
    &::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass26_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fcdc2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass26_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass26_0._SetIsMuteForAll_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass26_0::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass26_0::_SetIsMuteForAll_b__0)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2fce7e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass26_0*>::get(), "<SetIsMuteForAll>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Vivox::AsyncNoResult*& Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass26_0::__cordl_internal_get_ar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ar;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncNoResult*> const& Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass26_0::__cordl_internal_get_ar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ar;
}
constexpr void Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass26_0::__cordl_internal_set_ar(::Unity::Services::Vivox::AsyncNoResult* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ar)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::vx_req_channel_mute_user_t*& Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass26_0::__cordl_internal_get_request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_channel_mute_user_t*> const&
Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass26_0::__cordl_internal_get_request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr void Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass26_0::__cordl_internal_set_request(::Unity::Services::Vivox::vx_req_channel_mute_user_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___request)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass26_0* Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass26_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass26_0*>());
}
inline void Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass26_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass26_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass26_0::_SetIsMuteForAll_b__0(::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass26_0*>::get(), "<SetIsMuteForAll>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass26_0::__ChannelParticipant____c__DisplayClass26_0() {}
//  Writing Method size for method: ::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass28_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass28_0::*)()>(
    &::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass28_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fcdf10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass28_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass28_0._SetIsMuteForAll_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass28_0::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass28_0::_SetIsMuteForAll_b__0)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2fce92c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass28_0*>::get(), "<SetIsMuteForAll>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Vivox::AsyncNoResult*& Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass28_0::__cordl_internal_get_ar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ar;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncNoResult*> const& Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass28_0::__cordl_internal_get_ar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ar;
}
constexpr void Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass28_0::__cordl_internal_set_ar(::Unity::Services::Vivox::AsyncNoResult* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ar)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::vx_req_channel_mute_user_t*& Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass28_0::__cordl_internal_get_request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_channel_mute_user_t*> const&
Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass28_0::__cordl_internal_get_request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr void Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass28_0::__cordl_internal_set_request(::Unity::Services::Vivox::vx_req_channel_mute_user_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___request)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass28_0* Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass28_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass28_0*>());
}
inline void Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass28_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass28_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass28_0::_SetIsMuteForAll_b__0(::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass28_0*>::get(), "<SetIsMuteForAll>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass28_0::__ChannelParticipant____c__DisplayClass28_0() {}
//  Writing Method size for method: ::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass43_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass43_0::*)()>(
    &::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass43_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fce234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass43_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass43_0._set_LocalMute_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass43_0::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass43_0::_set_LocalMute_b__0)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2fcea70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass43_0*>::get(), "<set_LocalMute>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Vivox::ChannelParticipant*& Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass43_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::ChannelParticipant*> const&
Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass43_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass43_0::__cordl_internal_set___4__this(::Unity::Services::Vivox::ChannelParticipant* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass43_0::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr bool const& Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass43_0::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass43_0::__cordl_internal_set_value(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
constexpr ::Unity::Services::Vivox::vx_req_session_set_participant_mute_for_me_t*& Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass43_0::__cordl_internal_get_request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_session_set_participant_mute_for_me_t*> const&
Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass43_0::__cordl_internal_get_request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr void Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass43_0::__cordl_internal_set_request(::Unity::Services::Vivox::vx_req_session_set_participant_mute_for_me_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___request)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass43_0* Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass43_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass43_0*>());
}
inline void Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass43_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass43_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass43_0::_set_LocalMute_b__0(::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass43_0*>::get(), "<set_LocalMute>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass43_0::__ChannelParticipant____c__DisplayClass43_0() {}
//  Writing Method size for method: ::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass46_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass46_0::*)()>(
    &::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass46_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fce424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass46_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass46_0._set_LocalVolumeAdjustment_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass46_0::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass46_0::_set_LocalVolumeAdjustment_b__0)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2fceb98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass46_0*>::get(), "<set_LocalVolumeAdjustment>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Vivox::ChannelParticipant*& Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass46_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::ChannelParticipant*> const&
Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass46_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass46_0::__cordl_internal_set___4__this(::Unity::Services::Vivox::ChannelParticipant* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::vx_req_session_set_participant_volume_for_me_t*& Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass46_0::__cordl_internal_get_request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_session_set_participant_volume_for_me_t*> const&
Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass46_0::__cordl_internal_get_request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr void Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass46_0::__cordl_internal_set_request(::Unity::Services::Vivox::vx_req_session_set_participant_volume_for_me_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___request)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass46_0* Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass46_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass46_0*>());
}
inline void Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass46_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass46_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass46_0::_set_LocalVolumeAdjustment_b__0(::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass46_0*>::get(), "<set_LocalVolumeAdjustment>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass46_0::__ChannelParticipant____c__DisplayClass46_0() {}
//  Writing Method size for method: ::Unity::Services::Vivox::ChannelParticipant.get__internalMute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Vivox::ChannelParticipant::*)()>(
    &::Unity::Services::Vivox::ChannelParticipant::get__internalMute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fcd520;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(),
                                                                               "get__internalMute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ChannelParticipant.set__internalMute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::ChannelParticipant::*)(bool)>(
    &::Unity::Services::Vivox::ChannelParticipant::set__internalMute)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2fcd528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "set__internalMute",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ChannelParticipant.get__internalVolumeAdjustment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Services::Vivox::ChannelParticipant::*)()>(
    &::Unity::Services::Vivox::ChannelParticipant::get__internalVolumeAdjustment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fcd5cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(),
                                                                               "get__internalVolumeAdjustment", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ChannelParticipant.set__internalVolumeAdjustment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::ChannelParticipant::*)(int32_t)>(
    &::Unity::Services::Vivox::ChannelParticipant::set__internalVolumeAdjustment)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2fcd5d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "set__internalVolumeAdjustment",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ChannelParticipant._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::ChannelParticipant::*)(
    ::Unity::Services::Vivox::ChannelSession*, ::Unity::Services::Vivox::vx_evt_participant_added_t*)>(&::Unity::Services::Vivox::ChannelParticipant::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2fcd67c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::ChannelSession*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_participant_added_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ChannelParticipant.add_PropertyChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::ChannelParticipant::*)(::System::ComponentModel::PropertyChangedEventHandler*)>(
    &::Unity::Services::Vivox::ChannelParticipant::add_PropertyChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2fcd754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "add_PropertyChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyChangedEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ChannelParticipant.remove_PropertyChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::ChannelParticipant::*)(::System::ComponentModel::PropertyChangedEventHandler*)>(
    &::Unity::Services::Vivox::ChannelParticipant::remove_PropertyChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2fcd7f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "remove_PropertyChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyChangedEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ChannelParticipant.get_ParentChannelSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::IChannelSession* (::Unity::Services::Vivox::ChannelParticipant::*)()>(
    &::Unity::Services::Vivox::ChannelParticipant::get_ParentChannelSession)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fcd88c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(),
                                                                               "get_ParentChannelSession", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ChannelParticipant.get_IsSelf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Vivox::ChannelParticipant::*)()>(
    &::Unity::Services::Vivox::ChannelParticipant::get_IsSelf)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fcd894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(),
                                                                               "get_IsSelf", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ChannelParticipant.SetIsMuteForAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::Unity::Services::Vivox::ChannelParticipant::*)(::StringW, bool, ::System::AsyncCallback*)>(
    &::Unity::Services::Vivox::ChannelParticipant::SetIsMuteForAll)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2fcd89c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "SetIsMuteForAll", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ChannelParticipant.SetIsMuteForAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::Unity::Services::Vivox::ChannelParticipant::*)(bool, ::System::AsyncCallback*)>(
    &::Unity::Services::Vivox::ChannelParticipant::SetIsMuteForAll)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x2fcd8a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "SetIsMuteForAll", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ChannelParticipant.SetIsMuteForAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::Unity::Services::Vivox::ChannelParticipant::*)(::StringW, bool, ::StringW, ::System::AsyncCallback*)>(&::Unity::Services::Vivox::ChannelParticipant::SetIsMuteForAll)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2fcdc34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "SetIsMuteForAll", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ChannelParticipant.SetIsMuteForAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::Unity::Services::Vivox::ChannelParticipant::*)(bool, ::StringW, ::System::AsyncCallback*)>(
    &::Unity::Services::Vivox::ChannelParticipant::SetIsMuteForAll)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x2fcdc44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "SetIsMuteForAll", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ChannelParticipant.get_Account
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::AccountId* (::Unity::Services::Vivox::ChannelParticipant::*)()>(
    &::Unity::Services::Vivox::ChannelParticipant::get_Account)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fcdf18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(),
                                                                               "get_Account", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ChannelParticipant.get_Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Vivox::ChannelParticipant::*)()>(
    &::Unity::Services::Vivox::ChannelParticipant::get_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fcdf20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "get_Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ChannelParticipant.get_SpeechDetected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Vivox::ChannelParticipant::*)()>(
    &::Unity::Services::Vivox::ChannelParticipant::get_SpeechDetected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fcdf28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(),
                                                                               "get_SpeechDetected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ChannelParticipant.set_SpeechDetected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::ChannelParticipant::*)(bool)>(
    &::Unity::Services::Vivox::ChannelParticipant::set_SpeechDetected)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2fcdf30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "set_SpeechDetected",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ChannelParticipant.get_IsMutedForAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Vivox::ChannelParticipant::*)()>(
    &::Unity::Services::Vivox::ChannelParticipant::get_IsMutedForAll)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fcdfe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(),
                                                                               "get_IsMutedForAll", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ChannelParticipant.set_IsMutedForAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::ChannelParticipant::*)(bool)>(
    &::Unity::Services::Vivox::ChannelParticipant::set_IsMutedForAll)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2fcdfe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "set_IsMutedForAll",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ChannelParticipant.get_LocalMute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Vivox::ChannelParticipant::*)()>(
    &::Unity::Services::Vivox::ChannelParticipant::get_LocalMute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fce098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(),
                                                                               "get_LocalMute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ChannelParticipant.set_LocalMute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::ChannelParticipant::*)(bool)>(
    &::Unity::Services::Vivox::ChannelParticipant::set_LocalMute)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x2fce0a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "set_LocalMute",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ChannelParticipant.get_LocalVolumeAdjustment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Services::Vivox::ChannelParticipant::*)()>(
    &::Unity::Services::Vivox::ChannelParticipant::get_LocalVolumeAdjustment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fce23c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(),
                                                                               "get_LocalVolumeAdjustment", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ChannelParticipant.set_LocalVolumeAdjustment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::ChannelParticipant::*)(int32_t)>(
    &::Unity::Services::Vivox::ChannelParticipant::set_LocalVolumeAdjustment)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x2fce244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "set_LocalVolumeAdjustment",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ChannelParticipant.get_InText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Vivox::ChannelParticipant::*)()>(
    &::Unity::Services::Vivox::ChannelParticipant::get_InText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fce42c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(),
                                                                               "get_InText", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ChannelParticipant.set_InText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::ChannelParticipant::*)(bool)>(
    &::Unity::Services::Vivox::ChannelParticipant::set_InText)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2fce434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "set_InText",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ChannelParticipant.get_InAudio
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Vivox::ChannelParticipant::*)()>(
    &::Unity::Services::Vivox::ChannelParticipant::get_InAudio)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fce4e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(),
                                                                               "get_InAudio", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ChannelParticipant.set_InAudio
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::ChannelParticipant::*)(bool)>(
    &::Unity::Services::Vivox::ChannelParticipant::set_InAudio)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2fce4ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "set_InAudio",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ChannelParticipant.get_UnavailableCaptureDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Vivox::ChannelParticipant::*)()>(
    &::Unity::Services::Vivox::ChannelParticipant::get_UnavailableCaptureDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fce59c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(),
                                                                               "get_UnavailableCaptureDevice", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ChannelParticipant.set_UnavailableCaptureDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::ChannelParticipant::*)(bool)>(
    &::Unity::Services::Vivox::ChannelParticipant::set_UnavailableCaptureDevice)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2fce5a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "set_UnavailableCaptureDevice",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ChannelParticipant.get_UnavailableRenderDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Vivox::ChannelParticipant::*)()>(
    &::Unity::Services::Vivox::ChannelParticipant::get_UnavailableRenderDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fce654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(),
                                                                               "get_UnavailableRenderDevice", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ChannelParticipant.set_UnavailableRenderDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::ChannelParticipant::*)(bool)>(
    &::Unity::Services::Vivox::ChannelParticipant::set_UnavailableRenderDevice)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2fce65c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "set_UnavailableRenderDevice",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ChannelParticipant.get_AudioEnergy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::Unity::Services::Vivox::ChannelParticipant::*)()>(
    &::Unity::Services::Vivox::ChannelParticipant::get_AudioEnergy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fce70c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(),
                                                                               "get_AudioEnergy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ChannelParticipant.set_AudioEnergy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::ChannelParticipant::*)(double_t)>(
    &::Unity::Services::Vivox::ChannelParticipant::set_AudioEnergy)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2fce714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "set_AudioEnergy",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ChannelParticipant.get_ParticipantId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Vivox::ChannelParticipant::*)()>(
    &::Unity::Services::Vivox::ChannelParticipant::get_ParticipantId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fce7e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(),
                                                                               "get_ParticipantId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Vivox::IParticipant"
constexpr Unity::Services::Vivox::ChannelParticipant::operator ::Unity::Services::Vivox::IParticipant*() noexcept {
  return static_cast<::Unity::Services::Vivox::IParticipant*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Vivox::IParticipant"
constexpr ::Unity::Services::Vivox::IParticipant* Unity::Services::Vivox::ChannelParticipant::i___Unity__Services__Vivox__IParticipant() noexcept {
  return static_cast<::Unity::Services::Vivox::IParticipant*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>"
constexpr Unity::Services::Vivox::ChannelParticipant::operator ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>*() noexcept {
  return static_cast<::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>"
constexpr ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>*
Unity::Services::Vivox::ChannelParticipant::i___Unity__Services__Vivox__IKeyedItemNotifyPropertyChanged_1___StringW_() noexcept {
  return static_cast<::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
constexpr Unity::Services::Vivox::ChannelParticipant::operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept {
  return static_cast<::System::ComponentModel::INotifyPropertyChanged*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
constexpr ::System::ComponentModel::INotifyPropertyChanged* Unity::Services::Vivox::ChannelParticipant::i___System__ComponentModel__INotifyPropertyChanged() noexcept {
  return static_cast<::System::ComponentModel::INotifyPropertyChanged*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Services::Vivox::IParticipantProperties"
constexpr Unity::Services::Vivox::ChannelParticipant::operator ::Unity::Services::Vivox::IParticipantProperties*() noexcept {
  return static_cast<::Unity::Services::Vivox::IParticipantProperties*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Vivox::IParticipantProperties"
constexpr ::Unity::Services::Vivox::IParticipantProperties* Unity::Services::Vivox::ChannelParticipant::i___Unity__Services__Vivox__IParticipantProperties() noexcept {
  return static_cast<::Unity::Services::Vivox::IParticipantProperties*>(static_cast<void*>(this));
}
constexpr ::Unity::Services::Vivox::ChannelSession*& Unity::Services::Vivox::ChannelParticipant::__cordl_internal_get__parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parent;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::ChannelSession*> const& Unity::Services::Vivox::ChannelParticipant::__cordl_internal_get__parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parent;
}
constexpr void Unity::Services::Vivox::ChannelParticipant::__cordl_internal_set__parent(::Unity::Services::Vivox::ChannelSession* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Unity::Services::Vivox::ChannelParticipant::__cordl_internal_get__speechDetected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____speechDetected;
}
constexpr bool const& Unity::Services::Vivox::ChannelParticipant::__cordl_internal_get__speechDetected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____speechDetected;
}
constexpr void Unity::Services::Vivox::ChannelParticipant::__cordl_internal_set__speechDetected(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____speechDetected = value;
}
constexpr bool& Unity::Services::Vivox::ChannelParticipant::__cordl_internal_get__textActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textActive;
}
constexpr bool const& Unity::Services::Vivox::ChannelParticipant::__cordl_internal_get__textActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textActive;
}
constexpr void Unity::Services::Vivox::ChannelParticipant::__cordl_internal_set__textActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____textActive = value;
}
constexpr bool& Unity::Services::Vivox::ChannelParticipant::__cordl_internal_get__audioActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioActive;
}
constexpr bool const& Unity::Services::Vivox::ChannelParticipant::__cordl_internal_get__audioActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioActive;
}
constexpr void Unity::Services::Vivox::ChannelParticipant::__cordl_internal_set__audioActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioActive = value;
}
constexpr double_t& Unity::Services::Vivox::ChannelParticipant::__cordl_internal_get__audioEnergy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioEnergy;
}
constexpr double_t const& Unity::Services::Vivox::ChannelParticipant::__cordl_internal_get__audioEnergy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioEnergy;
}
constexpr void Unity::Services::Vivox::ChannelParticipant::__cordl_internal_set__audioEnergy(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioEnergy = value;
}
constexpr bool& Unity::Services::Vivox::ChannelParticipant::__cordl_internal_get__isMutedForEveryone() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isMutedForEveryone;
}
constexpr bool const& Unity::Services::Vivox::ChannelParticipant::__cordl_internal_get__isMutedForEveryone() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isMutedForEveryone;
}
constexpr void Unity::Services::Vivox::ChannelParticipant::__cordl_internal_set__isMutedForEveryone(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isMutedForEveryone = value;
}
constexpr bool& Unity::Services::Vivox::ChannelParticipant::__cordl_internal_get__unavailableCaptureDevice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unavailableCaptureDevice;
}
constexpr bool const& Unity::Services::Vivox::ChannelParticipant::__cordl_internal_get__unavailableCaptureDevice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unavailableCaptureDevice;
}
constexpr void Unity::Services::Vivox::ChannelParticipant::__cordl_internal_set__unavailableCaptureDevice(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____unavailableCaptureDevice = value;
}
constexpr bool& Unity::Services::Vivox::ChannelParticipant::__cordl_internal_get__unavailableRenderDevice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unavailableRenderDevice;
}
constexpr bool const& Unity::Services::Vivox::ChannelParticipant::__cordl_internal_get__unavailableRenderDevice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unavailableRenderDevice;
}
constexpr void Unity::Services::Vivox::ChannelParticipant::__cordl_internal_set__unavailableRenderDevice(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____unavailableRenderDevice = value;
}
constexpr bool& Unity::Services::Vivox::ChannelParticipant::__cordl_internal_get__localMute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localMute;
}
constexpr bool const& Unity::Services::Vivox::ChannelParticipant::__cordl_internal_get__localMute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localMute;
}
constexpr void Unity::Services::Vivox::ChannelParticipant::__cordl_internal_set__localMute(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localMute = value;
}
constexpr int32_t& Unity::Services::Vivox::ChannelParticipant::__cordl_internal_get__localVolumeAdjustment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localVolumeAdjustment;
}
constexpr int32_t const& Unity::Services::Vivox::ChannelParticipant::__cordl_internal_get__localVolumeAdjustment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localVolumeAdjustment;
}
constexpr void Unity::Services::Vivox::ChannelParticipant::__cordl_internal_set__localVolumeAdjustment(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localVolumeAdjustment = value;
}
constexpr ::System::ComponentModel::PropertyChangedEventHandler*& Unity::Services::Vivox::ChannelParticipant::__cordl_internal_get_PropertyChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PropertyChanged;
}
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyChangedEventHandler*> const& Unity::Services::Vivox::ChannelParticipant::__cordl_internal_get_PropertyChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PropertyChanged;
}
constexpr void Unity::Services::Vivox::ChannelParticipant::__cordl_internal_set_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PropertyChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Unity::Services::Vivox::ChannelParticipant::__cordl_internal_get__IsSelf_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsSelf_k__BackingField;
}
constexpr bool const& Unity::Services::Vivox::ChannelParticipant::__cordl_internal_get__IsSelf_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsSelf_k__BackingField;
}
constexpr void Unity::Services::Vivox::ChannelParticipant::__cordl_internal_set__IsSelf_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsSelf_k__BackingField = value;
}
constexpr ::Unity::Services::Vivox::AccountId*& Unity::Services::Vivox::ChannelParticipant::__cordl_internal_get__Account_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Account_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AccountId*> const& Unity::Services::Vivox::ChannelParticipant::__cordl_internal_get__Account_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Account_k__BackingField;
}
constexpr void Unity::Services::Vivox::ChannelParticipant::__cordl_internal_set__Account_k__BackingField(::Unity::Services::Vivox::AccountId* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Account_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::Vivox::ChannelParticipant::__cordl_internal_get__Key_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Key_k__BackingField;
}
constexpr ::StringW const& Unity::Services::Vivox::ChannelParticipant::__cordl_internal_get__Key_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Key_k__BackingField;
}
constexpr void Unity::Services::Vivox::ChannelParticipant::__cordl_internal_set__Key_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Key_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool Unity::Services::Vivox::ChannelParticipant::get__internalMute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(),
                                                                             "get__internalMute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::ChannelParticipant::set__internalMute(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "set__internalMute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Unity::Services::Vivox::ChannelParticipant::get__internalVolumeAdjustment() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(),
                                                                             "get__internalVolumeAdjustment", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::ChannelParticipant::set__internalVolumeAdjustment(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "set__internalVolumeAdjustment",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Services::Vivox::ChannelParticipant* Unity::Services::Vivox::ChannelParticipant::New_ctor(::Unity::Services::Vivox::ChannelSession* parent,
                                                                                                          ::Unity::Services::Vivox::vx_evt_participant_added_t* theEvent) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::ChannelParticipant*>(parent, theEvent));
}
inline void Unity::Services::Vivox::ChannelParticipant::_ctor(::Unity::Services::Vivox::ChannelSession* parent, ::Unity::Services::Vivox::vx_evt_participant_added_t* theEvent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::ChannelSession*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_participant_added_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parent, theEvent);
}
inline void Unity::Services::Vivox::ChannelParticipant::add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "add_PropertyChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyChangedEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::Vivox::ChannelParticipant::remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "remove_PropertyChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyChangedEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Services::Vivox::IChannelSession* Unity::Services::Vivox::ChannelParticipant::get_ParentChannelSession() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(),
                                                                             "get_ParentChannelSession", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::IChannelSession*, false>(this, ___internal_method);
}
inline bool Unity::Services::Vivox::ChannelParticipant::get_IsSelf() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "get_IsSelf",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* Unity::Services::Vivox::ChannelParticipant::SetIsMuteForAll(::StringW accountHandle, bool setMuted, ::System::AsyncCallback* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "SetIsMuteForAll", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, accountHandle, setMuted, callback);
}
inline ::System::IAsyncResult* Unity::Services::Vivox::ChannelParticipant::SetIsMuteForAll(bool setMuted, ::System::AsyncCallback* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "SetIsMuteForAll", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, setMuted, callback);
}
inline ::System::IAsyncResult* Unity::Services::Vivox::ChannelParticipant::SetIsMuteForAll(::StringW accountHandle, bool setMuted, ::StringW accessToken, ::System::AsyncCallback* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "SetIsMuteForAll", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, accountHandle, setMuted, accessToken, callback);
}
inline ::System::IAsyncResult* Unity::Services::Vivox::ChannelParticipant::SetIsMuteForAll(bool setMuted, ::StringW accessToken, ::System::AsyncCallback* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "SetIsMuteForAll", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, setMuted, accessToken, callback);
}
inline ::Unity::Services::Vivox::AccountId* Unity::Services::Vivox::ChannelParticipant::get_Account() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(),
                                                                             "get_Account", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::AccountId*, false>(this, ___internal_method);
}
inline ::StringW Unity::Services::Vivox::ChannelParticipant::get_Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "get_Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool Unity::Services::Vivox::ChannelParticipant::get_SpeechDetected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(),
                                                                             "get_SpeechDetected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::ChannelParticipant::set_SpeechDetected(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "set_SpeechDetected",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Unity::Services::Vivox::ChannelParticipant::get_IsMutedForAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(),
                                                                             "get_IsMutedForAll", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::ChannelParticipant::set_IsMutedForAll(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "set_IsMutedForAll",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Unity::Services::Vivox::ChannelParticipant::get_LocalMute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(),
                                                                             "get_LocalMute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::ChannelParticipant::set_LocalMute(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "set_LocalMute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Unity::Services::Vivox::ChannelParticipant::get_LocalVolumeAdjustment() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(),
                                                                             "get_LocalVolumeAdjustment", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::ChannelParticipant::set_LocalVolumeAdjustment(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "set_LocalVolumeAdjustment",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Unity::Services::Vivox::ChannelParticipant::get_InText() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "get_InText",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::ChannelParticipant::set_InText(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "set_InText",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Unity::Services::Vivox::ChannelParticipant::get_InAudio() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(),
                                                                             "get_InAudio", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::ChannelParticipant::set_InAudio(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "set_InAudio",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Unity::Services::Vivox::ChannelParticipant::get_UnavailableCaptureDevice() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(),
                                                                             "get_UnavailableCaptureDevice", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::ChannelParticipant::set_UnavailableCaptureDevice(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "set_UnavailableCaptureDevice",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Unity::Services::Vivox::ChannelParticipant::get_UnavailableRenderDevice() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(),
                                                                             "get_UnavailableRenderDevice", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::ChannelParticipant::set_UnavailableRenderDevice(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "set_UnavailableRenderDevice",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline double_t Unity::Services::Vivox::ChannelParticipant::get_AudioEnergy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(),
                                                                             "get_AudioEnergy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::ChannelParticipant::set_AudioEnergy(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(), "set_AudioEnergy",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Unity::Services::Vivox::ChannelParticipant::get_ParticipantId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelParticipant*>::get(),
                                                                             "get_ParticipantId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::ChannelParticipant::ChannelParticipant() {}
