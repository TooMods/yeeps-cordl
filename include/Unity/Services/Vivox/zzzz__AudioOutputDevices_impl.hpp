#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Threading/Tasks/zzzz__Task_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Vivox/zzzz__AudioOutputDevices_def.hpp"
#include "System/ComponentModel/zzzz__INotifyPropertyChanged_def.hpp"
#include "System/ComponentModel/zzzz__PropertyChangedEventHandler_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "Unity/Services/Vivox/zzzz__AsyncNoResult_def.hpp"
#include "Unity/Services/Vivox/zzzz__AudioDevice_def.hpp"
#include "Unity/Services/Vivox/zzzz__AudioOutputDevices_def.hpp"
#include "Unity/Services/Vivox/zzzz__IAudioDevice_def.hpp"
#include "Unity/Services/Vivox/zzzz__IAudioDevices_def.hpp"
#include "Unity/Services/Vivox/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "Unity/Services/Vivox/zzzz__ReadWriteDictionary_3_def.hpp"
#include "Unity/Services/Vivox/zzzz__VxClient_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_base_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_req_aux_get_render_devices_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_req_aux_set_render_device_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_req_aux_set_speaker_level_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_req_connector_mute_local_speaker_t_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0::*)()>(
    &::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fcb27c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0._BeginSetActiveDevice_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0::_BeginSetActiveDevice_b__0)> {
  constexpr static std::size_t size = 0x64c;
  constexpr static std::size_t addrs = 0x2fcbeac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0*>::get(), "<BeginSetActiveDevice>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Vivox::AudioOutputDevices*& Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AudioOutputDevices*> const&
Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0::__cordl_internal_set___4__this(::Unity::Services::Vivox::AudioOutputDevices* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::IAudioDevice*& Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0::__cordl_internal_get_device() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___device;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::IAudioDevice*> const& Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0::__cordl_internal_get_device() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___device;
}
constexpr void Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0::__cordl_internal_set_device(::Unity::Services::Vivox::IAudioDevice* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___device)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::AsyncNoResult*& Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0::__cordl_internal_get_result() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___result;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncNoResult*> const&
Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0::__cordl_internal_get_result() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___result;
}
constexpr void Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0::__cordl_internal_set_result(::Unity::Services::Vivox::AsyncNoResult* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___result)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::vx_req_aux_set_render_device_t*& Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0::__cordl_internal_get_request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_aux_set_render_device_t*> const&
Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0::__cordl_internal_get_request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr void Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0::__cordl_internal_set_request(::Unity::Services::Vivox::vx_req_aux_set_render_device_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___request)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0* Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0*>());
}
inline void Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0::_BeginSetActiveDevice_b__0(::System::IAsyncResult* ar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0*>::get(), "<BeginSetActiveDevice>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ar);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0::__AudioOutputDevices____c__DisplayClass31_0() {}
//  Writing Method size for method: ::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass35_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass35_0::*)()>(
    &::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass35_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fcb500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass35_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass35_0._set_VolumeAdjustment_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass35_0::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass35_0::_set_VolumeAdjustment_b__0)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2fcc4f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass35_0*>::get(), "<set_VolumeAdjustment>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Vivox::AudioOutputDevices*& Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass35_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AudioOutputDevices*> const&
Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass35_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass35_0::__cordl_internal_set___4__this(::Unity::Services::Vivox::AudioOutputDevices* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::vx_req_aux_set_speaker_level_t*& Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass35_0::__cordl_internal_get_request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_aux_set_speaker_level_t*> const&
Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass35_0::__cordl_internal_get_request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr void Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass35_0::__cordl_internal_set_request(::Unity::Services::Vivox::vx_req_aux_set_speaker_level_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___request)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass35_0* Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass35_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass35_0*>());
}
inline void Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass35_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass35_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass35_0::_set_VolumeAdjustment_b__0(::System::IAsyncResult* ar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass35_0*>::get(), "<set_VolumeAdjustment>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ar);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass35_0::__AudioOutputDevices____c__DisplayClass35_0() {}
//  Writing Method size for method: ::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass38_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass38_0::*)()>(
    &::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass38_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fcb6bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass38_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass38_0._set_Muted_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass38_0::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass38_0::_set_Muted_b__0)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2fcc608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass38_0*>::get(), "<set_Muted>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Vivox::AudioOutputDevices*& Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass38_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AudioOutputDevices*> const&
Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass38_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass38_0::__cordl_internal_set___4__this(::Unity::Services::Vivox::AudioOutputDevices* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::vx_req_connector_mute_local_speaker_t*& Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass38_0::__cordl_internal_get_request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_connector_mute_local_speaker_t*> const&
Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass38_0::__cordl_internal_get_request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr void Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass38_0::__cordl_internal_set_request(::Unity::Services::Vivox::vx_req_connector_mute_local_speaker_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___request)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass38_0* Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass38_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass38_0*>());
}
inline void Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass38_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass38_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass38_0::_set_Muted_b__0(::System::IAsyncResult* ar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass38_0*>::get(), "<set_Muted>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ar);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass38_0::__AudioOutputDevices____c__DisplayClass38_0() {}
//  Writing Method size for method: ::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass39_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass39_0::*)()>(
    &::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass39_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fcb824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass39_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass39_0._BeginRefresh_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass39_0::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass39_0::_BeginRefresh_b__0)> {
  constexpr static std::size_t size = 0x870;
  constexpr static std::size_t addrs = 0x2fcc718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass39_0*>::get(), "<BeginRefresh>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Vivox::AudioOutputDevices*& Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass39_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AudioOutputDevices*> const&
Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass39_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass39_0::__cordl_internal_set___4__this(::Unity::Services::Vivox::AudioOutputDevices* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::AsyncNoResult*& Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass39_0::__cordl_internal_get_result() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___result;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncNoResult*> const&
Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass39_0::__cordl_internal_get_result() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___result;
}
constexpr void Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass39_0::__cordl_internal_set_result(::Unity::Services::Vivox::AsyncNoResult* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___result)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::vx_req_aux_get_render_devices_t*& Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass39_0::__cordl_internal_get_request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_aux_get_render_devices_t*> const&
Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass39_0::__cordl_internal_get_request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr void Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass39_0::__cordl_internal_set_request(::Unity::Services::Vivox::vx_req_aux_get_render_devices_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___request)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass39_0* Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass39_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass39_0*>());
}
inline void Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass39_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass39_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass39_0::_BeginRefresh_b__0(::System::IAsyncResult* ar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass39_0*>::get(), "<BeginRefresh>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ar);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass39_0::__AudioOutputDevices____c__DisplayClass39_0() {}
//  Writing Method size for method: ::Unity::Services::Vivox::__AudioOutputDevices___SetActiveDeviceAsync_d__45.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__AudioOutputDevices___SetActiveDeviceAsync_d__45::*)()>(
    &::Unity::Services::Vivox::__AudioOutputDevices___SetActiveDeviceAsync_d__45::MoveNext)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x2fccf88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioOutputDevices___SetActiveDeviceAsync_d__45>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::__AudioOutputDevices___SetActiveDeviceAsync_d__45.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__AudioOutputDevices___SetActiveDeviceAsync_d__45::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Unity::Services::Vivox::__AudioOutputDevices___SetActiveDeviceAsync_d__45::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2fcd248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioOutputDevices___SetActiveDeviceAsync_d__45>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Unity::Services::Vivox::__AudioOutputDevices___SetActiveDeviceAsync_d__45::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Unity::Services::Vivox::__AudioOutputDevices___SetActiveDeviceAsync_d__45::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Unity::Services::Vivox::__AudioOutputDevices___SetActiveDeviceAsync_d__45::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioOutputDevices___SetActiveDeviceAsync_d__45>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::__AudioOutputDevices___SetActiveDeviceAsync_d__45::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioOutputDevices___SetActiveDeviceAsync_d__45>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::AudioOutputDevices*", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "device", ty: "::Unity::Services::Vivox::IAudioDevice*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "callback", ty:
// "::System::AsyncCallback*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::__AudioOutputDevices___SetActiveDeviceAsync_d__45::__AudioOutputDevices___SetActiveDeviceAsync_d__45(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Unity::Services::Vivox::AudioOutputDevices* __4__this,
    ::Unity::Services::Vivox::IAudioDevice* device, ::System::AsyncCallback* callback, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->device = device;
  this->callback = callback;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::__AudioOutputDevices___SetActiveDeviceAsync_d__45::__AudioOutputDevices___SetActiveDeviceAsync_d__45() {}
//  Writing Method size for method: ::Unity::Services::Vivox::__AudioOutputDevices___RefreshDevicesAsync_d__46.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__AudioOutputDevices___RefreshDevicesAsync_d__46::*)()>(
    &::Unity::Services::Vivox::__AudioOutputDevices___RefreshDevicesAsync_d__46::MoveNext)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x2fcd254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioOutputDevices___RefreshDevicesAsync_d__46>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::__AudioOutputDevices___RefreshDevicesAsync_d__46.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__AudioOutputDevices___RefreshDevicesAsync_d__46::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Unity::Services::Vivox::__AudioOutputDevices___RefreshDevicesAsync_d__46::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2fcd514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioOutputDevices___RefreshDevicesAsync_d__46>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Unity::Services::Vivox::__AudioOutputDevices___RefreshDevicesAsync_d__46::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Unity::Services::Vivox::__AudioOutputDevices___RefreshDevicesAsync_d__46::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Unity::Services::Vivox::__AudioOutputDevices___RefreshDevicesAsync_d__46::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioOutputDevices___RefreshDevicesAsync_d__46>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::__AudioOutputDevices___RefreshDevicesAsync_d__46::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioOutputDevices___RefreshDevicesAsync_d__46>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::AudioOutputDevices*", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "cb", ty: "::System::AsyncCallback*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::__AudioOutputDevices___RefreshDevicesAsync_d__46::__AudioOutputDevices___RefreshDevicesAsync_d__46(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Unity::Services::Vivox::AudioOutputDevices* __4__this, ::System::AsyncCallback* cb,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cb = cb;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::__AudioOutputDevices___RefreshDevicesAsync_d__46::__AudioOutputDevices___RefreshDevicesAsync_d__46() {}
//  Writing Method size for method: ::Unity::Services::Vivox::AudioOutputDevices.ConvertGain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Services::Vivox::AudioOutputDevices::*)(int32_t)>(
    &::Unity::Services::Vivox::AudioOutputDevices::ConvertGain)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fcac04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), "ConvertGain",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioOutputDevices._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::AudioOutputDevices::*)(::Unity::Services::Vivox::VxClient*)>(
    &::Unity::Services::Vivox::AudioOutputDevices::_ctor)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x2fcac0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::VxClient*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioOutputDevices.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::AudioOutputDevices::*)()>(&::Unity::Services::Vivox::AudioOutputDevices::Finalize)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2fcadec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioOutputDevices.add_PropertyChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::AudioOutputDevices::*)(::System::ComponentModel::PropertyChangedEventHandler*)>(
    &::Unity::Services::Vivox::AudioOutputDevices::add_PropertyChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2fcaf08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), "add_PropertyChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyChangedEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioOutputDevices.remove_PropertyChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::AudioOutputDevices::*)(::System::ComponentModel::PropertyChangedEventHandler*)>(
    &::Unity::Services::Vivox::AudioOutputDevices::remove_PropertyChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2fcafa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), "remove_PropertyChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyChangedEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioOutputDevices.get_SystemDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::IAudioDevice* (::Unity::Services::Vivox::AudioOutputDevices::*)()>(
    &::Unity::Services::Vivox::AudioOutputDevices::get_SystemDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fcb040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(),
                                                                               "get_SystemDevice", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioOutputDevices.get_CommunicationDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::IAudioDevice* (::Unity::Services::Vivox::AudioOutputDevices::*)()>(
    &::Unity::Services::Vivox::AudioOutputDevices::get_CommunicationDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fcb048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(),
                                                                               "get_CommunicationDevice", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioOutputDevices.get_ActiveDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::IAudioDevice* (::Unity::Services::Vivox::AudioOutputDevices::*)()>(
    &::Unity::Services::Vivox::AudioOutputDevices::get_ActiveDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fcb050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(),
                                                                               "get_ActiveDevice", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioOutputDevices.get_EffectiveDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::IAudioDevice* (::Unity::Services::Vivox::AudioOutputDevices::*)()>(
    &::Unity::Services::Vivox::AudioOutputDevices::get_EffectiveDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fcb058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(),
                                                                               "get_EffectiveDevice", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioOutputDevices.get_AvailableDevices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::IReadOnlyDictionary_2<::StringW, ::Unity::Services::Vivox::IAudioDevice*>* (
    ::Unity::Services::Vivox::AudioOutputDevices::*)()>(&::Unity::Services::Vivox::AudioOutputDevices::get_AvailableDevices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fcb060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(),
                                                                               "get_AvailableDevices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioOutputDevices.get_DeviceEnergy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::Unity::Services::Vivox::AudioOutputDevices::*)()>(
    &::Unity::Services::Vivox::AudioOutputDevices::get_DeviceEnergy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fcb068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(),
                                                                               "get_DeviceEnergy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioOutputDevices.BeginSetActiveDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::Unity::Services::Vivox::AudioOutputDevices::*)(::Unity::Services::Vivox::IAudioDevice*, ::System::AsyncCallback*)>(&::Unity::Services::Vivox::AudioOutputDevices::BeginSetActiveDevice)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x2fcb070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), "BeginSetActiveDevice", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::IAudioDevice*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioOutputDevices.EndSetActiveDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::AudioOutputDevices::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::AudioOutputDevices::EndSetActiveDevice)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2fcb284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), "EndSetActiveDevice", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioOutputDevices.get_VolumeAdjustment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Services::Vivox::AudioOutputDevices::*)()>(
    &::Unity::Services::Vivox::AudioOutputDevices::get_VolumeAdjustment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fcb308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(),
                                                                               "get_VolumeAdjustment", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioOutputDevices.set_VolumeAdjustment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::AudioOutputDevices::*)(int32_t)>(
    &::Unity::Services::Vivox::AudioOutputDevices::set_VolumeAdjustment)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x2fcb310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), "set_VolumeAdjustment",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioOutputDevices.get_Muted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Vivox::AudioOutputDevices::*)()>(&::Unity::Services::Vivox::AudioOutputDevices::get_Muted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fcb508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(),
                                                                               "get_Muted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioOutputDevices.set_Muted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::AudioOutputDevices::*)(bool)>(
    &::Unity::Services::Vivox::AudioOutputDevices::set_Muted)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2fcb510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), "set_Muted",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioOutputDevices.BeginRefresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::Unity::Services::Vivox::AudioOutputDevices::*)(::System::AsyncCallback*)>(
    &::Unity::Services::Vivox::AudioOutputDevices::BeginRefresh)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2fcb6c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), "BeginRefresh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioOutputDevices.EndRefresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::AudioOutputDevices::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::AudioOutputDevices::EndRefresh)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2fcb82c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), "EndRefresh", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioOutputDevices.OnEventMessageReceived
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::AudioOutputDevices::*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::AudioOutputDevices::OnEventMessageReceived)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2fcb8b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), "OnEventMessageReceived", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioOutputDevices.HandleDeviceHotSwap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::AudioOutputDevices::*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::AudioOutputDevices::HandleDeviceHotSwap)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2fcb918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), "HandleDeviceHotSwap", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioOutputDevices.HandleDeviceAudioProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::AudioOutputDevices::*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::AudioOutputDevices::HandleDeviceAudioProperties)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2fcb998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), "HandleDeviceAudioProperties", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioOutputDevices.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::AudioOutputDevices::*)()>(&::Unity::Services::Vivox::AudioOutputDevices::Clear)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2fcb9c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), "Clear",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioOutputDevices.SetActiveDeviceAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Unity::Services::Vivox::AudioOutputDevices::*)(::Unity::Services::Vivox::IAudioDevice*, ::System::AsyncCallback*)>(&::Unity::Services::Vivox::AudioOutputDevices::SetActiveDeviceAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2fcba2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), "SetActiveDeviceAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::IAudioDevice*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioOutputDevices.RefreshDevicesAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Unity::Services::Vivox::AudioOutputDevices::*)(::System::AsyncCallback*)>(
    &::Unity::Services::Vivox::AudioOutputDevices::RefreshDevicesAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2fcbb08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), "RefreshDevicesAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioOutputDevices._HandleDeviceHotSwap_b__42_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::AudioOutputDevices::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::AudioOutputDevices::_HandleDeviceHotSwap_b__42_0)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2fcbbe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), "<HandleDeviceHotSwap>b__42_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioOutputDevices._SetActiveDeviceAsync_b__45_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Unity::Services::Vivox::AudioOutputDevices::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::AudioOutputDevices::_SetActiveDeviceAsync_b__45_0)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2fcbc8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), "<SetActiveDeviceAsync>b__45_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioOutputDevices._RefreshDevicesAsync_b__46_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Unity::Services::Vivox::AudioOutputDevices::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::AudioOutputDevices::_RefreshDevicesAsync_b__46_0)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2fcbd9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), "<RefreshDevicesAsync>b__46_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Vivox::IAudioDevices"
constexpr Unity::Services::Vivox::AudioOutputDevices::operator ::Unity::Services::Vivox::IAudioDevices*() noexcept {
  return static_cast<::Unity::Services::Vivox::IAudioDevices*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Vivox::IAudioDevices"
constexpr ::Unity::Services::Vivox::IAudioDevices* Unity::Services::Vivox::AudioOutputDevices::i___Unity__Services__Vivox__IAudioDevices() noexcept {
  return static_cast<::Unity::Services::Vivox::IAudioDevices*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
constexpr Unity::Services::Vivox::AudioOutputDevices::operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept {
  return static_cast<::System::ComponentModel::INotifyPropertyChanged*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
constexpr ::System::ComponentModel::INotifyPropertyChanged* Unity::Services::Vivox::AudioOutputDevices::i___System__ComponentModel__INotifyPropertyChanged() noexcept {
  return static_cast<::System::ComponentModel::INotifyPropertyChanged*>(static_cast<void*>(this));
}
constexpr ::StringW& Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_get_DefaultSystemDevice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DefaultSystemDevice;
}
constexpr ::StringW const& Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_get_DefaultSystemDevice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DefaultSystemDevice;
}
constexpr void Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_set_DefaultSystemDevice(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DefaultSystemDevice)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_get_DefaultCommunicationDevice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DefaultCommunicationDevice;
}
constexpr ::StringW const& Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_get_DefaultCommunicationDevice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DefaultCommunicationDevice;
}
constexpr void Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_set_DefaultCommunicationDevice(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DefaultCommunicationDevice)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::AudioDevice*& Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_get__defaultSystemDevice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultSystemDevice;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AudioDevice*> const& Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_get__defaultSystemDevice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultSystemDevice;
}
constexpr void Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_set__defaultSystemDevice(::Unity::Services::Vivox::AudioDevice* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultSystemDevice)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::AudioDevice*& Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_get__defaultCommunicationDevice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultCommunicationDevice;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AudioDevice*> const& Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_get__defaultCommunicationDevice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultCommunicationDevice;
}
constexpr void Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_set__defaultCommunicationDevice(::Unity::Services::Vivox::AudioDevice* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultCommunicationDevice)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::AudioDevice*& Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_get__currentSystemDevice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentSystemDevice;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AudioDevice*> const& Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_get__currentSystemDevice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentSystemDevice;
}
constexpr void Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_set__currentSystemDevice(::Unity::Services::Vivox::AudioDevice* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentSystemDevice)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::AudioDevice*& Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_get__currentCommunicationDevice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentCommunicationDevice;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AudioDevice*> const& Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_get__currentCommunicationDevice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentCommunicationDevice;
}
constexpr void Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_set__currentCommunicationDevice(::Unity::Services::Vivox::AudioDevice* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentCommunicationDevice)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::AudioDevice*& Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_get__activeDevice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeDevice;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AudioDevice*> const& Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_get__activeDevice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeDevice;
}
constexpr void Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_set__activeDevice(::Unity::Services::Vivox::AudioDevice* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____activeDevice)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::AudioDevice*& Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_get__effectiveDevice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effectiveDevice;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AudioDevice*> const& Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_get__effectiveDevice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effectiveDevice;
}
constexpr void Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_set__effectiveDevice(::Unity::Services::Vivox::AudioDevice* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____effectiveDevice)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_get__volumeAdjustment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____volumeAdjustment;
}
constexpr int32_t const& Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_get__volumeAdjustment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____volumeAdjustment;
}
constexpr void Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_set__volumeAdjustment(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____volumeAdjustment = value;
}
constexpr bool& Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_get__muted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____muted;
}
constexpr bool const& Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_get__muted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____muted;
}
constexpr void Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_set__muted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____muted = value;
}
constexpr double_t& Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_get__deviceEnergy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceEnergy;
}
constexpr double_t const& Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_get__deviceEnergy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceEnergy;
}
constexpr void Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_set__deviceEnergy(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____deviceEnergy = value;
}
constexpr ::Unity::Services::Vivox::VxClient*& Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_get__client() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____client;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::VxClient*> const& Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_get__client() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____client;
}
constexpr void Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_set__client(::Unity::Services::Vivox::VxClient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____client)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::ReadWriteDictionary_3<::StringW, ::Unity::Services::Vivox::IAudioDevice*, ::Unity::Services::Vivox::AudioDevice*>*&
Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_get__devices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____devices;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::ReadWriteDictionary_3<::StringW, ::Unity::Services::Vivox::IAudioDevice*, ::Unity::Services::Vivox::AudioDevice*>*> const&
Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_get__devices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____devices;
}
constexpr void Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_set__devices(
    ::Unity::Services::Vivox::ReadWriteDictionary_3<::StringW, ::Unity::Services::Vivox::IAudioDevice*, ::Unity::Services::Vivox::AudioDevice*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____devices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::ComponentModel::PropertyChangedEventHandler*& Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_get_PropertyChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PropertyChanged;
}
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyChangedEventHandler*> const& Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_get_PropertyChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PropertyChanged;
}
constexpr void Unity::Services::Vivox::AudioOutputDevices::__cordl_internal_set_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PropertyChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t Unity::Services::Vivox::AudioOutputDevices::ConvertGain(int32_t gain) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), "ConvertGain",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, gain);
}
inline ::Unity::Services::Vivox::AudioOutputDevices* Unity::Services::Vivox::AudioOutputDevices::New_ctor(::Unity::Services::Vivox::VxClient* client) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::AudioOutputDevices*>(client));
}
inline void Unity::Services::Vivox::AudioOutputDevices::_ctor(::Unity::Services::Vivox::VxClient* client) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::VxClient*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, client);
}
inline void Unity::Services::Vivox::AudioOutputDevices::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::AudioOutputDevices::add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), "add_PropertyChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyChangedEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::Vivox::AudioOutputDevices::remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), "remove_PropertyChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyChangedEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Services::Vivox::IAudioDevice* Unity::Services::Vivox::AudioOutputDevices::get_SystemDevice() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(),
                                                                             "get_SystemDevice", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::IAudioDevice*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::IAudioDevice* Unity::Services::Vivox::AudioOutputDevices::get_CommunicationDevice() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(),
                                                                             "get_CommunicationDevice", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::IAudioDevice*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::IAudioDevice* Unity::Services::Vivox::AudioOutputDevices::get_ActiveDevice() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(),
                                                                             "get_ActiveDevice", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::IAudioDevice*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::IAudioDevice* Unity::Services::Vivox::AudioOutputDevices::get_EffectiveDevice() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(),
                                                                             "get_EffectiveDevice", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::IAudioDevice*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::IReadOnlyDictionary_2<::StringW, ::Unity::Services::Vivox::IAudioDevice*>* Unity::Services::Vivox::AudioOutputDevices::get_AvailableDevices() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(),
                                                                             "get_AvailableDevices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::IReadOnlyDictionary_2<::StringW, ::Unity::Services::Vivox::IAudioDevice*>*, false>(this, ___internal_method);
}
inline double_t Unity::Services::Vivox::AudioOutputDevices::get_DeviceEnergy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(),
                                                                             "get_DeviceEnergy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* Unity::Services::Vivox::AudioOutputDevices::BeginSetActiveDevice(::Unity::Services::Vivox::IAudioDevice* device, ::System::AsyncCallback* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), "BeginSetActiveDevice", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::IAudioDevice*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, device, callback);
}
inline void Unity::Services::Vivox::AudioOutputDevices::EndSetActiveDevice(::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), "EndSetActiveDevice", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline int32_t Unity::Services::Vivox::AudioOutputDevices::get_VolumeAdjustment() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(),
                                                                             "get_VolumeAdjustment", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::AudioOutputDevices::set_VolumeAdjustment(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), "set_VolumeAdjustment",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Unity::Services::Vivox::AudioOutputDevices::get_Muted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), "get_Muted",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::AudioOutputDevices::set_Muted(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), "set_Muted",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::IAsyncResult* Unity::Services::Vivox::AudioOutputDevices::BeginRefresh(::System::AsyncCallback* callback) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), "BeginRefresh", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback);
}
inline void Unity::Services::Vivox::AudioOutputDevices::EndRefresh(::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), "EndRefresh", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline void Unity::Services::Vivox::AudioOutputDevices::OnEventMessageReceived(::Unity::Services::Vivox::vx_evt_base_t* eventMessage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), "OnEventMessageReceived", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventMessage);
}
inline void Unity::Services::Vivox::AudioOutputDevices::HandleDeviceHotSwap(::Unity::Services::Vivox::vx_evt_base_t* eventMessage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), "HandleDeviceHotSwap", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventMessage);
}
inline void Unity::Services::Vivox::AudioOutputDevices::HandleDeviceAudioProperties(::Unity::Services::Vivox::vx_evt_base_t* eventMessage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), "HandleDeviceAudioProperties", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventMessage);
}
inline void Unity::Services::Vivox::AudioOutputDevices::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param callback: ::System::AsyncCallback* (default: nullptr)
inline ::System::Threading::Tasks::Task* Unity::Services::Vivox::AudioOutputDevices::SetActiveDeviceAsync(::Unity::Services::Vivox::IAudioDevice* device, ::System::AsyncCallback* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), "SetActiveDeviceAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::IAudioDevice*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, device, callback);
}
inline ::System::Threading::Tasks::Task* Unity::Services::Vivox::AudioOutputDevices::RefreshDevicesAsync(::System::AsyncCallback* cb) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), "RefreshDevicesAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cb);
}
inline void Unity::Services::Vivox::AudioOutputDevices::_HandleDeviceHotSwap_b__42_0(::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), "<HandleDeviceHotSwap>b__42_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::System::Threading::Tasks::Task* Unity::Services::Vivox::AudioOutputDevices::_SetActiveDeviceAsync_b__45_0(::System::IAsyncResult* ar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), "<SetActiveDeviceAsync>b__45_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, ar);
}
inline ::System::Threading::Tasks::Task* Unity::Services::Vivox::AudioOutputDevices::_RefreshDevicesAsync_b__46_0(::System::IAsyncResult* ar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioOutputDevices*>::get(), "<RefreshDevicesAsync>b__46_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, ar);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::AudioOutputDevices::AudioOutputDevices() {}
