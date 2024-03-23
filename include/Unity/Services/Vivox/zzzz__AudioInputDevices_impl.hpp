#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Threading/Tasks/zzzz__Task_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Vivox/zzzz__AudioInputDevices_def.hpp"
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
#include "Unity/Services/Vivox/zzzz__AudioInputDevices_def.hpp"
#include "Unity/Services/Vivox/zzzz__IAudioDevice_def.hpp"
#include "Unity/Services/Vivox/zzzz__IAudioDevices_def.hpp"
#include "Unity/Services/Vivox/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "Unity/Services/Vivox/zzzz__ReadWriteDictionary_3_def.hpp"
#include "Unity/Services/Vivox/zzzz__VxClient_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_base_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_req_aux_get_capture_devices_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_req_aux_set_capture_device_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_req_aux_set_mic_level_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_req_connector_mute_local_mic_t_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::__AudioInputDevices___SetActiveDeviceAsync_d__31.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__AudioInputDevices___SetActiveDeviceAsync_d__31::*)()>(
    &::Unity::Services::Vivox::__AudioInputDevices___SetActiveDeviceAsync_d__31::MoveNext)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x2fc9590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioInputDevices___SetActiveDeviceAsync_d__31>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::__AudioInputDevices___SetActiveDeviceAsync_d__31.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__AudioInputDevices___SetActiveDeviceAsync_d__31::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Unity::Services::Vivox::__AudioInputDevices___SetActiveDeviceAsync_d__31::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2fc9850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioInputDevices___SetActiveDeviceAsync_d__31>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Unity::Services::Vivox::__AudioInputDevices___SetActiveDeviceAsync_d__31::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Unity::Services::Vivox::__AudioInputDevices___SetActiveDeviceAsync_d__31::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Unity::Services::Vivox::__AudioInputDevices___SetActiveDeviceAsync_d__31::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioInputDevices___SetActiveDeviceAsync_d__31>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::__AudioInputDevices___SetActiveDeviceAsync_d__31::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioInputDevices___SetActiveDeviceAsync_d__31>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::AudioInputDevices*", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "device", ty: "::Unity::Services::Vivox::IAudioDevice*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "callback", ty:
// "::System::AsyncCallback*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::__AudioInputDevices___SetActiveDeviceAsync_d__31::__AudioInputDevices___SetActiveDeviceAsync_d__31(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Unity::Services::Vivox::AudioInputDevices* __4__this,
    ::Unity::Services::Vivox::IAudioDevice* device, ::System::AsyncCallback* callback, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->device = device;
  this->callback = callback;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::__AudioInputDevices___SetActiveDeviceAsync_d__31::__AudioInputDevices___SetActiveDeviceAsync_d__31() {}
//  Writing Method size for method: ::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass32_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass32_0::*)()>(
    &::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass32_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fc8a40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass32_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass32_0._BeginSetActiveDevice_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass32_0::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass32_0::_BeginSetActiveDevice_b__0)> {
  constexpr static std::size_t size = 0x64c;
  constexpr static std::size_t addrs = 0x2fc985c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass32_0*>::get(), "<BeginSetActiveDevice>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Vivox::AudioInputDevices*& Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass32_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AudioInputDevices*> const&
Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass32_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass32_0::__cordl_internal_set___4__this(::Unity::Services::Vivox::AudioInputDevices* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::IAudioDevice*& Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass32_0::__cordl_internal_get_device() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___device;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::IAudioDevice*> const& Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass32_0::__cordl_internal_get_device() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___device;
}
constexpr void Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass32_0::__cordl_internal_set_device(::Unity::Services::Vivox::IAudioDevice* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___device)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::AsyncNoResult*& Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass32_0::__cordl_internal_get_result() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___result;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncNoResult*> const& Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass32_0::__cordl_internal_get_result() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___result;
}
constexpr void Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass32_0::__cordl_internal_set_result(::Unity::Services::Vivox::AsyncNoResult* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___result)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::vx_req_aux_set_capture_device_t*& Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass32_0::__cordl_internal_get_request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_aux_set_capture_device_t*> const&
Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass32_0::__cordl_internal_get_request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr void Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass32_0::__cordl_internal_set_request(::Unity::Services::Vivox::vx_req_aux_set_capture_device_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___request)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass32_0* Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass32_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass32_0*>());
}
inline void Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass32_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass32_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass32_0::_BeginSetActiveDevice_b__0(::System::IAsyncResult* ar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass32_0*>::get(), "<BeginSetActiveDevice>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ar);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass32_0::__AudioInputDevices____c__DisplayClass32_0() {}
//  Writing Method size for method: ::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass36_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass36_0::*)()>(
    &::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass36_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fc8cc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass36_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass36_0._set_VolumeAdjustment_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass36_0::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass36_0::_set_VolumeAdjustment_b__0)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2fc9ea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass36_0*>::get(), "<set_VolumeAdjustment>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Vivox::AudioInputDevices*& Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass36_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AudioInputDevices*> const&
Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass36_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass36_0::__cordl_internal_set___4__this(::Unity::Services::Vivox::AudioInputDevices* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::vx_req_aux_set_mic_level_t*& Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass36_0::__cordl_internal_get_request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_aux_set_mic_level_t*> const&
Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass36_0::__cordl_internal_get_request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr void Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass36_0::__cordl_internal_set_request(::Unity::Services::Vivox::vx_req_aux_set_mic_level_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___request)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass36_0* Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass36_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass36_0*>());
}
inline void Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass36_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass36_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass36_0::_set_VolumeAdjustment_b__0(::System::IAsyncResult* ar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass36_0*>::get(), "<set_VolumeAdjustment>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ar);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass36_0::__AudioInputDevices____c__DisplayClass36_0() {}
//  Writing Method size for method: ::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass39_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass39_0::*)()>(
    &::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass39_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fc8e7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass39_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass39_0._set_Muted_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass39_0::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass39_0::_set_Muted_b__0)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2fc9fb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass39_0*>::get(), "<set_Muted>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Vivox::AudioInputDevices*& Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass39_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AudioInputDevices*> const&
Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass39_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass39_0::__cordl_internal_set___4__this(::Unity::Services::Vivox::AudioInputDevices* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::vx_req_connector_mute_local_mic_t*& Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass39_0::__cordl_internal_get_request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_connector_mute_local_mic_t*> const&
Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass39_0::__cordl_internal_get_request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr void Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass39_0::__cordl_internal_set_request(::Unity::Services::Vivox::vx_req_connector_mute_local_mic_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___request)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass39_0* Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass39_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass39_0*>());
}
inline void Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass39_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass39_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass39_0::_set_Muted_b__0(::System::IAsyncResult* ar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass39_0*>::get(), "<set_Muted>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ar);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass39_0::__AudioInputDevices____c__DisplayClass39_0() {}
//  Writing Method size for method: ::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass40_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass40_0::*)()>(
    &::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass40_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fc8fe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass40_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass40_0._BeginRefresh_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass40_0::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass40_0::_BeginRefresh_b__0)> {
  constexpr static std::size_t size = 0x870;
  constexpr static std::size_t addrs = 0x2fca0c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass40_0*>::get(), "<BeginRefresh>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Vivox::AudioInputDevices*& Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass40_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AudioInputDevices*> const&
Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass40_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass40_0::__cordl_internal_set___4__this(::Unity::Services::Vivox::AudioInputDevices* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::AsyncNoResult*& Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass40_0::__cordl_internal_get_result() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___result;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncNoResult*> const& Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass40_0::__cordl_internal_get_result() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___result;
}
constexpr void Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass40_0::__cordl_internal_set_result(::Unity::Services::Vivox::AsyncNoResult* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___result)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::vx_req_aux_get_capture_devices_t*& Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass40_0::__cordl_internal_get_request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_aux_get_capture_devices_t*> const&
Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass40_0::__cordl_internal_get_request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr void Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass40_0::__cordl_internal_set_request(::Unity::Services::Vivox::vx_req_aux_get_capture_devices_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___request)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass40_0* Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass40_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass40_0*>());
}
inline void Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass40_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass40_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass40_0::_BeginRefresh_b__0(::System::IAsyncResult* ar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass40_0*>::get(), "<BeginRefresh>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ar);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::__AudioInputDevices____c__DisplayClass40_0::__AudioInputDevices____c__DisplayClass40_0() {}
//  Writing Method size for method: ::Unity::Services::Vivox::__AudioInputDevices___RefreshDevicesAsync_d__42.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__AudioInputDevices___RefreshDevicesAsync_d__42::*)()>(
    &::Unity::Services::Vivox::__AudioInputDevices___RefreshDevicesAsync_d__42::MoveNext)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x2fca938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioInputDevices___RefreshDevicesAsync_d__42>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::__AudioInputDevices___RefreshDevicesAsync_d__42.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__AudioInputDevices___RefreshDevicesAsync_d__42::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Unity::Services::Vivox::__AudioInputDevices___RefreshDevicesAsync_d__42::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2fcabf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioInputDevices___RefreshDevicesAsync_d__42>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Unity::Services::Vivox::__AudioInputDevices___RefreshDevicesAsync_d__42::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Unity::Services::Vivox::__AudioInputDevices___RefreshDevicesAsync_d__42::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Unity::Services::Vivox::__AudioInputDevices___RefreshDevicesAsync_d__42::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioInputDevices___RefreshDevicesAsync_d__42>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::__AudioInputDevices___RefreshDevicesAsync_d__42::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__AudioInputDevices___RefreshDevicesAsync_d__42>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::AudioInputDevices*", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "cb", ty: "::System::AsyncCallback*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::__AudioInputDevices___RefreshDevicesAsync_d__42::__AudioInputDevices___RefreshDevicesAsync_d__42(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Unity::Services::Vivox::AudioInputDevices* __4__this, ::System::AsyncCallback* cb,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cb = cb;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::__AudioInputDevices___RefreshDevicesAsync_d__42::__AudioInputDevices___RefreshDevicesAsync_d__42() {}
//  Writing Method size for method: ::Unity::Services::Vivox::AudioInputDevices.ConvertGain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Services::Vivox::AudioInputDevices::*)(int32_t)>(
    &::Unity::Services::Vivox::AudioInputDevices::ConvertGain)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fc82ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "ConvertGain",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioInputDevices._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::AudioInputDevices::*)(::Unity::Services::Vivox::VxClient*)>(
    &::Unity::Services::Vivox::AudioInputDevices::_ctor)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x2fc82f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::VxClient*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioInputDevices.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::AudioInputDevices::*)()>(&::Unity::Services::Vivox::AudioInputDevices::Finalize)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2fc84d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioInputDevices.add_PropertyChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::AudioInputDevices::*)(::System::ComponentModel::PropertyChangedEventHandler*)>(
    &::Unity::Services::Vivox::AudioInputDevices::add_PropertyChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2fc85f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "add_PropertyChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyChangedEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioInputDevices.remove_PropertyChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::AudioInputDevices::*)(::System::ComponentModel::PropertyChangedEventHandler*)>(
    &::Unity::Services::Vivox::AudioInputDevices::remove_PropertyChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2fc868c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "remove_PropertyChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyChangedEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioInputDevices.get_SystemDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::IAudioDevice* (::Unity::Services::Vivox::AudioInputDevices::*)()>(
    &::Unity::Services::Vivox::AudioInputDevices::get_SystemDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fc8728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(),
                                                                               "get_SystemDevice", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioInputDevices.get_CommunicationDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::IAudioDevice* (::Unity::Services::Vivox::AudioInputDevices::*)()>(
    &::Unity::Services::Vivox::AudioInputDevices::get_CommunicationDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fc8730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(),
                                                                               "get_CommunicationDevice", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioInputDevices.get_ActiveDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::IAudioDevice* (::Unity::Services::Vivox::AudioInputDevices::*)()>(
    &::Unity::Services::Vivox::AudioInputDevices::get_ActiveDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fc8738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(),
                                                                               "get_ActiveDevice", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioInputDevices.get_EffectiveDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::IAudioDevice* (::Unity::Services::Vivox::AudioInputDevices::*)()>(
    &::Unity::Services::Vivox::AudioInputDevices::get_EffectiveDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fc8740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(),
                                                                               "get_EffectiveDevice", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioInputDevices.get_AvailableDevices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::IReadOnlyDictionary_2<::StringW, ::Unity::Services::Vivox::IAudioDevice*>* (
    ::Unity::Services::Vivox::AudioInputDevices::*)()>(&::Unity::Services::Vivox::AudioInputDevices::get_AvailableDevices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fc8748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(),
                                                                               "get_AvailableDevices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioInputDevices.get_DeviceEnergy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::Unity::Services::Vivox::AudioInputDevices::*)()>(
    &::Unity::Services::Vivox::AudioInputDevices::get_DeviceEnergy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fc8750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(),
                                                                               "get_DeviceEnergy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioInputDevices.SetActiveDeviceAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Unity::Services::Vivox::AudioInputDevices::*)(::Unity::Services::Vivox::IAudioDevice*, ::System::AsyncCallback*)>(&::Unity::Services::Vivox::AudioInputDevices::SetActiveDeviceAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2fc8758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "SetActiveDeviceAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::IAudioDevice*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioInputDevices.BeginSetActiveDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::Unity::Services::Vivox::AudioInputDevices::*)(::Unity::Services::Vivox::IAudioDevice*, ::System::AsyncCallback*)>(&::Unity::Services::Vivox::AudioInputDevices::BeginSetActiveDevice)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x2fc8834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "BeginSetActiveDevice", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::IAudioDevice*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioInputDevices.EndSetActiveDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::AudioInputDevices::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::AudioInputDevices::EndSetActiveDevice)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2fc8a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "EndSetActiveDevice", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioInputDevices.get_VolumeAdjustment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Services::Vivox::AudioInputDevices::*)()>(
    &::Unity::Services::Vivox::AudioInputDevices::get_VolumeAdjustment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fc8acc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(),
                                                                               "get_VolumeAdjustment", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioInputDevices.set_VolumeAdjustment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::AudioInputDevices::*)(int32_t)>(
    &::Unity::Services::Vivox::AudioInputDevices::set_VolumeAdjustment)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2fc8ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "set_VolumeAdjustment",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioInputDevices.get_Muted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Vivox::AudioInputDevices::*)()>(&::Unity::Services::Vivox::AudioInputDevices::get_Muted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fc8cc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "get_Muted",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioInputDevices.set_Muted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::AudioInputDevices::*)(bool)>(
    &::Unity::Services::Vivox::AudioInputDevices::set_Muted)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2fc8cd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "set_Muted",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioInputDevices.BeginRefresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::Unity::Services::Vivox::AudioInputDevices::*)(::System::AsyncCallback*)>(
    &::Unity::Services::Vivox::AudioInputDevices::BeginRefresh)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2fc8e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "BeginRefresh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioInputDevices.EndRefresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::AudioInputDevices::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::AudioInputDevices::EndRefresh)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2fc8fec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "EndRefresh", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioInputDevices.RefreshDevicesAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Unity::Services::Vivox::AudioInputDevices::*)(::System::AsyncCallback*)>(
    &::Unity::Services::Vivox::AudioInputDevices::RefreshDevicesAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2fc9070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "RefreshDevicesAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioInputDevices.OnEventMessageReceived
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::AudioInputDevices::*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::AudioInputDevices::OnEventMessageReceived)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2fc914c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "OnEventMessageReceived", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioInputDevices.HandleDeviceHotSwap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::AudioInputDevices::*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::AudioInputDevices::HandleDeviceHotSwap)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2fc91b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "HandleDeviceHotSwap", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioInputDevices.HandleDeviceAudioProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::AudioInputDevices::*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::AudioInputDevices::HandleDeviceAudioProperties)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2fc9234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "HandleDeviceAudioProperties", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioInputDevices.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::AudioInputDevices::*)()>(&::Unity::Services::Vivox::AudioInputDevices::Clear)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2fc9264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "Clear",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioInputDevices._SetActiveDeviceAsync_b__31_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Unity::Services::Vivox::AudioInputDevices::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::AudioInputDevices::_SetActiveDeviceAsync_b__31_0)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2fc92c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "<SetActiveDeviceAsync>b__31_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioInputDevices._RefreshDevicesAsync_b__42_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Unity::Services::Vivox::AudioInputDevices::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::AudioInputDevices::_RefreshDevicesAsync_b__42_0)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2fc93d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "<RefreshDevicesAsync>b__42_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioInputDevices._HandleDeviceHotSwap_b__44_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::AudioInputDevices::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::AudioInputDevices::_HandleDeviceHotSwap_b__44_0)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2fc94e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "<HandleDeviceHotSwap>b__44_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Vivox::IAudioDevices"
constexpr Unity::Services::Vivox::AudioInputDevices::operator ::Unity::Services::Vivox::IAudioDevices*() noexcept {
  return static_cast<::Unity::Services::Vivox::IAudioDevices*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Vivox::IAudioDevices"
constexpr ::Unity::Services::Vivox::IAudioDevices* Unity::Services::Vivox::AudioInputDevices::i___Unity__Services__Vivox__IAudioDevices() noexcept {
  return static_cast<::Unity::Services::Vivox::IAudioDevices*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
constexpr Unity::Services::Vivox::AudioInputDevices::operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept {
  return static_cast<::System::ComponentModel::INotifyPropertyChanged*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
constexpr ::System::ComponentModel::INotifyPropertyChanged* Unity::Services::Vivox::AudioInputDevices::i___System__ComponentModel__INotifyPropertyChanged() noexcept {
  return static_cast<::System::ComponentModel::INotifyPropertyChanged*>(static_cast<void*>(this));
}
constexpr ::StringW& Unity::Services::Vivox::AudioInputDevices::__cordl_internal_get_DefaultSystemDevice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DefaultSystemDevice;
}
constexpr ::StringW const& Unity::Services::Vivox::AudioInputDevices::__cordl_internal_get_DefaultSystemDevice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DefaultSystemDevice;
}
constexpr void Unity::Services::Vivox::AudioInputDevices::__cordl_internal_set_DefaultSystemDevice(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DefaultSystemDevice)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::Vivox::AudioInputDevices::__cordl_internal_get_DefaultCommunicationDevice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DefaultCommunicationDevice;
}
constexpr ::StringW const& Unity::Services::Vivox::AudioInputDevices::__cordl_internal_get_DefaultCommunicationDevice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DefaultCommunicationDevice;
}
constexpr void Unity::Services::Vivox::AudioInputDevices::__cordl_internal_set_DefaultCommunicationDevice(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DefaultCommunicationDevice)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::AudioDevice*& Unity::Services::Vivox::AudioInputDevices::__cordl_internal_get__defaultSystemDevice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultSystemDevice;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AudioDevice*> const& Unity::Services::Vivox::AudioInputDevices::__cordl_internal_get__defaultSystemDevice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultSystemDevice;
}
constexpr void Unity::Services::Vivox::AudioInputDevices::__cordl_internal_set__defaultSystemDevice(::Unity::Services::Vivox::AudioDevice* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultSystemDevice)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::AudioDevice*& Unity::Services::Vivox::AudioInputDevices::__cordl_internal_get__defaultCommunicationDevice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultCommunicationDevice;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AudioDevice*> const& Unity::Services::Vivox::AudioInputDevices::__cordl_internal_get__defaultCommunicationDevice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultCommunicationDevice;
}
constexpr void Unity::Services::Vivox::AudioInputDevices::__cordl_internal_set__defaultCommunicationDevice(::Unity::Services::Vivox::AudioDevice* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultCommunicationDevice)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::AudioDevice*& Unity::Services::Vivox::AudioInputDevices::__cordl_internal_get__currentSystemDevice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentSystemDevice;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AudioDevice*> const& Unity::Services::Vivox::AudioInputDevices::__cordl_internal_get__currentSystemDevice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentSystemDevice;
}
constexpr void Unity::Services::Vivox::AudioInputDevices::__cordl_internal_set__currentSystemDevice(::Unity::Services::Vivox::AudioDevice* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentSystemDevice)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::AudioDevice*& Unity::Services::Vivox::AudioInputDevices::__cordl_internal_get__currentCommunicationDevice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentCommunicationDevice;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AudioDevice*> const& Unity::Services::Vivox::AudioInputDevices::__cordl_internal_get__currentCommunicationDevice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentCommunicationDevice;
}
constexpr void Unity::Services::Vivox::AudioInputDevices::__cordl_internal_set__currentCommunicationDevice(::Unity::Services::Vivox::AudioDevice* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentCommunicationDevice)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::AudioDevice*& Unity::Services::Vivox::AudioInputDevices::__cordl_internal_get__activeDevice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeDevice;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AudioDevice*> const& Unity::Services::Vivox::AudioInputDevices::__cordl_internal_get__activeDevice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeDevice;
}
constexpr void Unity::Services::Vivox::AudioInputDevices::__cordl_internal_set__activeDevice(::Unity::Services::Vivox::AudioDevice* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____activeDevice)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::AudioDevice*& Unity::Services::Vivox::AudioInputDevices::__cordl_internal_get__effectiveDevice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effectiveDevice;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AudioDevice*> const& Unity::Services::Vivox::AudioInputDevices::__cordl_internal_get__effectiveDevice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effectiveDevice;
}
constexpr void Unity::Services::Vivox::AudioInputDevices::__cordl_internal_set__effectiveDevice(::Unity::Services::Vivox::AudioDevice* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____effectiveDevice)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Unity::Services::Vivox::AudioInputDevices::__cordl_internal_get__audioGain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioGain;
}
constexpr int32_t const& Unity::Services::Vivox::AudioInputDevices::__cordl_internal_get__audioGain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioGain;
}
constexpr void Unity::Services::Vivox::AudioInputDevices::__cordl_internal_set__audioGain(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioGain = value;
}
constexpr bool& Unity::Services::Vivox::AudioInputDevices::__cordl_internal_get__muted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____muted;
}
constexpr bool const& Unity::Services::Vivox::AudioInputDevices::__cordl_internal_get__muted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____muted;
}
constexpr void Unity::Services::Vivox::AudioInputDevices::__cordl_internal_set__muted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____muted = value;
}
constexpr double_t& Unity::Services::Vivox::AudioInputDevices::__cordl_internal_get__deviceEnergy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceEnergy;
}
constexpr double_t const& Unity::Services::Vivox::AudioInputDevices::__cordl_internal_get__deviceEnergy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceEnergy;
}
constexpr void Unity::Services::Vivox::AudioInputDevices::__cordl_internal_set__deviceEnergy(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____deviceEnergy = value;
}
constexpr ::Unity::Services::Vivox::VxClient*& Unity::Services::Vivox::AudioInputDevices::__cordl_internal_get__client() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____client;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::VxClient*> const& Unity::Services::Vivox::AudioInputDevices::__cordl_internal_get__client() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____client;
}
constexpr void Unity::Services::Vivox::AudioInputDevices::__cordl_internal_set__client(::Unity::Services::Vivox::VxClient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____client)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::ReadWriteDictionary_3<::StringW, ::Unity::Services::Vivox::IAudioDevice*, ::Unity::Services::Vivox::AudioDevice*>*&
Unity::Services::Vivox::AudioInputDevices::__cordl_internal_get__devices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____devices;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::ReadWriteDictionary_3<::StringW, ::Unity::Services::Vivox::IAudioDevice*, ::Unity::Services::Vivox::AudioDevice*>*> const&
Unity::Services::Vivox::AudioInputDevices::__cordl_internal_get__devices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____devices;
}
constexpr void Unity::Services::Vivox::AudioInputDevices::__cordl_internal_set__devices(
    ::Unity::Services::Vivox::ReadWriteDictionary_3<::StringW, ::Unity::Services::Vivox::IAudioDevice*, ::Unity::Services::Vivox::AudioDevice*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____devices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::ComponentModel::PropertyChangedEventHandler*& Unity::Services::Vivox::AudioInputDevices::__cordl_internal_get_PropertyChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PropertyChanged;
}
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyChangedEventHandler*> const& Unity::Services::Vivox::AudioInputDevices::__cordl_internal_get_PropertyChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PropertyChanged;
}
constexpr void Unity::Services::Vivox::AudioInputDevices::__cordl_internal_set_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PropertyChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t Unity::Services::Vivox::AudioInputDevices::ConvertGain(int32_t gain) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "ConvertGain",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, gain);
}
inline ::Unity::Services::Vivox::AudioInputDevices* Unity::Services::Vivox::AudioInputDevices::New_ctor(::Unity::Services::Vivox::VxClient* client) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::AudioInputDevices*>(client));
}
inline void Unity::Services::Vivox::AudioInputDevices::_ctor(::Unity::Services::Vivox::VxClient* client) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::VxClient*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, client);
}
inline void Unity::Services::Vivox::AudioInputDevices::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::AudioInputDevices::add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "add_PropertyChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyChangedEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::Vivox::AudioInputDevices::remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "remove_PropertyChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyChangedEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Services::Vivox::IAudioDevice* Unity::Services::Vivox::AudioInputDevices::get_SystemDevice() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(),
                                                                             "get_SystemDevice", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::IAudioDevice*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::IAudioDevice* Unity::Services::Vivox::AudioInputDevices::get_CommunicationDevice() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(),
                                                                             "get_CommunicationDevice", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::IAudioDevice*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::IAudioDevice* Unity::Services::Vivox::AudioInputDevices::get_ActiveDevice() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(),
                                                                             "get_ActiveDevice", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::IAudioDevice*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::IAudioDevice* Unity::Services::Vivox::AudioInputDevices::get_EffectiveDevice() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(),
                                                                             "get_EffectiveDevice", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::IAudioDevice*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::IReadOnlyDictionary_2<::StringW, ::Unity::Services::Vivox::IAudioDevice*>* Unity::Services::Vivox::AudioInputDevices::get_AvailableDevices() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(),
                                                                             "get_AvailableDevices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::IReadOnlyDictionary_2<::StringW, ::Unity::Services::Vivox::IAudioDevice*>*, false>(this, ___internal_method);
}
inline double_t Unity::Services::Vivox::AudioInputDevices::get_DeviceEnergy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(),
                                                                             "get_DeviceEnergy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
/// @param callback: ::System::AsyncCallback* (default: nullptr)
inline ::System::Threading::Tasks::Task* Unity::Services::Vivox::AudioInputDevices::SetActiveDeviceAsync(::Unity::Services::Vivox::IAudioDevice* device, ::System::AsyncCallback* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "SetActiveDeviceAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::IAudioDevice*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, device, callback);
}
inline ::System::IAsyncResult* Unity::Services::Vivox::AudioInputDevices::BeginSetActiveDevice(::Unity::Services::Vivox::IAudioDevice* device, ::System::AsyncCallback* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "BeginSetActiveDevice", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::IAudioDevice*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, device, callback);
}
inline void Unity::Services::Vivox::AudioInputDevices::EndSetActiveDevice(::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "EndSetActiveDevice", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline int32_t Unity::Services::Vivox::AudioInputDevices::get_VolumeAdjustment() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(),
                                                                             "get_VolumeAdjustment", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::AudioInputDevices::set_VolumeAdjustment(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "set_VolumeAdjustment",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Unity::Services::Vivox::AudioInputDevices::get_Muted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "get_Muted",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::AudioInputDevices::set_Muted(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "set_Muted",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::IAsyncResult* Unity::Services::Vivox::AudioInputDevices::BeginRefresh(::System::AsyncCallback* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "BeginRefresh", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback);
}
inline void Unity::Services::Vivox::AudioInputDevices::EndRefresh(::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "EndRefresh", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::System::Threading::Tasks::Task* Unity::Services::Vivox::AudioInputDevices::RefreshDevicesAsync(::System::AsyncCallback* cb) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "RefreshDevicesAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cb);
}
inline void Unity::Services::Vivox::AudioInputDevices::OnEventMessageReceived(::Unity::Services::Vivox::vx_evt_base_t* eventMessage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "OnEventMessageReceived", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventMessage);
}
inline void Unity::Services::Vivox::AudioInputDevices::HandleDeviceHotSwap(::Unity::Services::Vivox::vx_evt_base_t* eventMessage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "HandleDeviceHotSwap", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventMessage);
}
inline void Unity::Services::Vivox::AudioInputDevices::HandleDeviceAudioProperties(::Unity::Services::Vivox::vx_evt_base_t* eventMessage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "HandleDeviceAudioProperties", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventMessage);
}
inline void Unity::Services::Vivox::AudioInputDevices::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Unity::Services::Vivox::AudioInputDevices::_SetActiveDeviceAsync_b__31_0(::System::IAsyncResult* ar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "<SetActiveDeviceAsync>b__31_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, ar);
}
inline ::System::Threading::Tasks::Task* Unity::Services::Vivox::AudioInputDevices::_RefreshDevicesAsync_b__42_0(::System::IAsyncResult* ar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "<RefreshDevicesAsync>b__42_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, ar);
}
inline void Unity::Services::Vivox::AudioInputDevices::_HandleDeviceHotSwap_b__44_0(::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioInputDevices*>::get(), "<HandleDeviceHotSwap>b__44_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::AudioInputDevices::AudioInputDevices() {}
