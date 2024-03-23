#pragma once
#include "GlobalNamespace/zzzz__CurrencyStashMapObject_impl.hpp"
#include "GlobalNamespace/zzzz__MapObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__CurrencyStashMapObject_def.hpp"
#include "GlobalNamespace/zzzz__CurrencyStashMapObject_def.hpp"
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "GlobalNamespace/zzzz__SimpleButtonController_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__CurrencyStashMapObject__CompartmentData.GetInitialState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::__CurrencyStashMapObject__CompartmentData::*)()>(
    &::GlobalNamespace::__CurrencyStashMapObject__CompartmentData::GetInitialState)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3077708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CurrencyStashMapObject__CompartmentData>::get(), "GetInitialState",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CurrencyStashMapObject__CompartmentData.SetOpenness
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CurrencyStashMapObject__CompartmentData::*)(::UnityEngine::Vector3, float_t)>(
    &::GlobalNamespace::__CurrencyStashMapObject__CompartmentData::SetOpenness)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3078260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CurrencyStashMapObject__CompartmentData>::get(), "SetOpenness", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CurrencyStashMapObject__CompartmentData.GetWorldDispensePoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::__CurrencyStashMapObject__CompartmentData::*)()>(
    &::GlobalNamespace::__CurrencyStashMapObject__CompartmentData::GetWorldDispensePoint)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x30787b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CurrencyStashMapObject__CompartmentData>::get(), "GetWorldDispensePoint",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 GlobalNamespace::__CurrencyStashMapObject__CompartmentData::GetInitialState() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CurrencyStashMapObject__CompartmentData>::get(), "GetInitialState",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void GlobalNamespace::__CurrencyStashMapObject__CompartmentData::SetOpenness(::UnityEngine::Vector3 initialTransformation, float_t openness) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CurrencyStashMapObject__CompartmentData>::get(), "SetOpenness", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialTransformation, openness);
}
inline ::UnityEngine::Vector3 GlobalNamespace::__CurrencyStashMapObject__CompartmentData::GetWorldDispensePoint() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CurrencyStashMapObject__CompartmentData>::get(), "GetWorldDispensePoint",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "transform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "meshRenderer", ty:
// "::UnityW<::UnityEngine::MeshRenderer>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "localDispensePoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") },
// CppParam { name: "isRotationAnimation", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "finalTransformation", ty: "::UnityEngine::Vector3", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "openTimeDelay", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__CurrencyStashMapObject__CompartmentData::__CurrencyStashMapObject__CompartmentData(::UnityW<::UnityEngine::Transform> transform,
                                                                                                                  ::UnityW<::UnityEngine::MeshRenderer> meshRenderer,
                                                                                                                  ::UnityEngine::Vector3 localDispensePoint, bool isRotationAnimation,
                                                                                                                  ::UnityEngine::Vector3 finalTransformation, float_t openTimeDelay) noexcept {
  this->transform = transform;
  this->meshRenderer = meshRenderer;
  this->localDispensePoint = localDispensePoint;
  this->isRotationAnimation = isRotationAnimation;
  this->finalTransformation = finalTransformation;
  this->openTimeDelay = openTimeDelay;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__CurrencyStashMapObject__CompartmentData::__CurrencyStashMapObject__CompartmentData() {}
//  Writing Method size for method: ::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::*)(int32_t)>(
    &::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3078238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::*)()>(
    &::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x30787dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::*)()>(
    &::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x30787e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::*)()>(
    &::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x307895c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::*)()>(
    &::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3078964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::*)()>(
    &::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30789a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__CurrencyStashMapObject__CompartmentData& GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::__cordl_internal_get_compartment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compartment;
}
constexpr ::GlobalNamespace::__CurrencyStashMapObject__CompartmentData const& GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::__cordl_internal_get_compartment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compartment;
}
constexpr void GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::__cordl_internal_set_compartment(::GlobalNamespace::__CurrencyStashMapObject__CompartmentData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___compartment = value;
}
constexpr bool& GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::__cordl_internal_get_isMaster() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isMaster;
}
constexpr bool const& GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::__cordl_internal_get_isMaster() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isMaster;
}
constexpr void GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::__cordl_internal_set_isMaster(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isMaster = value;
}
constexpr int32_t& GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::__cordl_internal_get_currencyAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currencyAmount;
}
constexpr int32_t const& GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::__cordl_internal_get_currencyAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currencyAmount;
}
constexpr void GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::__cordl_internal_set_currencyAmount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currencyAmount = value;
}
constexpr ::UnityW<::GlobalNamespace::CurrencyStashMapObject>& GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::CurrencyStashMapObject> const& GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::CurrencyStashMapObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::__cordl_internal_get_initialTransformation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialTransformation;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::__cordl_internal_get_initialTransformation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialTransformation;
}
constexpr void GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::__cordl_internal_set_initialTransformation(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___initialTransformation = value;
}
constexpr float_t& GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::__cordl_internal_get__p_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____p_5__2;
}
constexpr float_t const& GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::__cordl_internal_get__p_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____p_5__2;
}
constexpr void GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::__cordl_internal_set__p_5__2(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____p_5__2 = value;
}
inline ::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19* GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19*>(__1__state));
}
inline void GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19() {}
//  Writing Method size for method: ::GlobalNamespace::CurrencyStashMapObject.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CurrencyStashMapObject::*)(
    ::StringW, ::UnityEngine::Vector3Int, ::GlobalNamespace::__MapObject__Facing, ::GlobalNamespace::__MapObject__Facing, ::StringW, ::StringW, bool, bool)>(
    &::GlobalNamespace::CurrencyStashMapObject::Initialize)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x307755c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyStashMapObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyStashMapObject*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CurrencyStashMapObject.SetIsRedeemable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CurrencyStashMapObject::*)(bool)>(
    &::GlobalNamespace::CurrencyStashMapObject::SetIsRedeemable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x30777d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyStashMapObject*>::get(), "SetIsRedeemable",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CurrencyStashMapObject.OnRedeemButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CurrencyStashMapObject::*)()>(
    &::GlobalNamespace::CurrencyStashMapObject::OnRedeemButtonPressed)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x30778a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyStashMapObject*>::get(),
                                                                               "OnRedeemButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CurrencyStashMapObject.OnRedeemSuccess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CurrencyStashMapObject::*)(int32_t, ::StringW)>(
    &::GlobalNamespace::CurrencyStashMapObject::OnRedeemSuccess)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x3077a34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyStashMapObject*>::get(), "OnRedeemSuccess", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CurrencyStashMapObject.OnReceiveSimpleCustomMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CurrencyStashMapObject::*)(bool, ::StringW)>(
    &::GlobalNamespace::CurrencyStashMapObject::OnReceiveSimpleCustomMessage)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x3078000;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyStashMapObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyStashMapObject*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CurrencyStashMapObject.OpenStash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CurrencyStashMapObject::*)(int32_t, bool)>(
    &::GlobalNamespace::CurrencyStashMapObject::OpenStash)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x3077c50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyStashMapObject*>::get(), "OpenStash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CurrencyStashMapObject.OnRedeemFailure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CurrencyStashMapObject::*)()>(&::GlobalNamespace::CurrencyStashMapObject::OnRedeemFailure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3078230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyStashMapObject*>::get(),
                                                                               "OnRedeemFailure", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CurrencyStashMapObject.OpenCompartmentRoutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (
    ::GlobalNamespace::CurrencyStashMapObject::*)(::UnityEngine::Vector3, ::GlobalNamespace::__CurrencyStashMapObject__CompartmentData, int32_t, bool)>(
    &::GlobalNamespace::CurrencyStashMapObject::OpenCompartmentRoutine)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x307816c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyStashMapObject*>::get(), "OpenCompartmentRoutine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__CurrencyStashMapObject__CompartmentData>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CurrencyStashMapObject.SetAllCompartmentOpeness
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CurrencyStashMapObject::*)(float_t)>(
    &::GlobalNamespace::CurrencyStashMapObject::SetAllCompartmentOpeness)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3077800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyStashMapObject*>::get(), "SetAllCompartmentOpeness",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CurrencyStashMapObject.AllowsBatching
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::CurrencyStashMapObject::*)()>(&::GlobalNamespace::CurrencyStashMapObject::AllowsBatching)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3078368;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyStashMapObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyStashMapObject*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CurrencyStashMapObject.SetSharedMaterials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CurrencyStashMapObject::*)(
    ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>)>(&::GlobalNamespace::CurrencyStashMapObject::SetSharedMaterials)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3078370;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyStashMapObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyStashMapObject*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CurrencyStashMapObject.SetRenderersActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CurrencyStashMapObject::*)(bool)>(
    &::GlobalNamespace::CurrencyStashMapObject::SetRenderersActive)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3078590;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyStashMapObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyStashMapObject*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CurrencyStashMapObject._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CurrencyStashMapObject::*)()>(&::GlobalNamespace::CurrencyStashMapObject::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3077550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyStashMapObject*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::CurrencyStashMapObject::__cordl_internal_get_stashKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stashKey;
}
constexpr ::StringW const& GlobalNamespace::CurrencyStashMapObject::__cordl_internal_get_stashKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stashKey;
}
constexpr void GlobalNamespace::CurrencyStashMapObject::__cordl_internal_set_stashKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stashKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__CurrencyStashMapObject__CompartmentData, ::Array<::GlobalNamespace::__CurrencyStashMapObject__CompartmentData>*>&
GlobalNamespace::CurrencyStashMapObject::__cordl_internal_get_compartments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compartments;
}
constexpr ::ArrayW<::GlobalNamespace::__CurrencyStashMapObject__CompartmentData, ::Array<::GlobalNamespace::__CurrencyStashMapObject__CompartmentData>*> const&
GlobalNamespace::CurrencyStashMapObject::__cordl_internal_get_compartments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compartments;
}
constexpr void GlobalNamespace::CurrencyStashMapObject::__cordl_internal_set_compartments(
    ::ArrayW<::GlobalNamespace::__CurrencyStashMapObject__CompartmentData, ::Array<::GlobalNamespace::__CurrencyStashMapObject__CompartmentData>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___compartments)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& GlobalNamespace::CurrencyStashMapObject::__cordl_internal_get_initialTransformations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialTransformations;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& GlobalNamespace::CurrencyStashMapObject::__cordl_internal_get_initialTransformations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialTransformations;
}
constexpr void GlobalNamespace::CurrencyStashMapObject::__cordl_internal_set_initialTransformations(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___initialTransformations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::CurrencyStashMapObject::__cordl_internal_get_compartmentOpenDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compartmentOpenDuration;
}
constexpr float_t const& GlobalNamespace::CurrencyStashMapObject::__cordl_internal_get_compartmentOpenDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compartmentOpenDuration;
}
constexpr void GlobalNamespace::CurrencyStashMapObject::__cordl_internal_set_compartmentOpenDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___compartmentOpenDuration = value;
}
constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& GlobalNamespace::CurrencyStashMapObject::__cordl_internal_get_redeemButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___redeemButton;
}
constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& GlobalNamespace::CurrencyStashMapObject::__cordl_internal_get_redeemButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___redeemButton;
}
constexpr void GlobalNamespace::CurrencyStashMapObject::__cordl_internal_set_redeemButton(::UnityW<::GlobalNamespace::SimpleButtonController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___redeemButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::CurrencyStashMapObject::__cordl_internal_get_redeemButtonMR() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___redeemButtonMR;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::CurrencyStashMapObject::__cordl_internal_get_redeemButtonMR() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___redeemButtonMR;
}
constexpr void GlobalNamespace::CurrencyStashMapObject::__cordl_internal_set_redeemButtonMR(::UnityW<::UnityEngine::MeshRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___redeemButtonMR)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::CurrencyStashMapObject::__cordl_internal_get_isRedeemable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRedeemable;
}
constexpr bool const& GlobalNamespace::CurrencyStashMapObject::__cordl_internal_get_isRedeemable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRedeemable;
}
constexpr void GlobalNamespace::CurrencyStashMapObject::__cordl_internal_set_isRedeemable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isRedeemable = value;
}
constexpr bool& GlobalNamespace::CurrencyStashMapObject::__cordl_internal_get_isTryingToRedeem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isTryingToRedeem;
}
constexpr bool const& GlobalNamespace::CurrencyStashMapObject::__cordl_internal_get_isTryingToRedeem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isTryingToRedeem;
}
constexpr void GlobalNamespace::CurrencyStashMapObject::__cordl_internal_set_isTryingToRedeem(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isTryingToRedeem = value;
}
/// @param instant: bool (default: false)
inline void GlobalNamespace::CurrencyStashMapObject::Initialize(::StringW key, ::UnityEngine::Vector3Int placedPosition, ::GlobalNamespace::__MapObject__Facing placedForwardFacing,
                                                                ::GlobalNamespace::__MapObject__Facing placedUpFacing, ::StringW colorKey, ::StringW ownerAccountID, bool placementPending,
                                                                bool instant) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyStashMapObject*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, placedPosition, placedForwardFacing, placedUpFacing, colorKey, ownerAccountID, placementPending, instant);
}
inline void GlobalNamespace::CurrencyStashMapObject::SetIsRedeemable(bool newIsRedeemable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyStashMapObject*>::get(), "SetIsRedeemable",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIsRedeemable);
}
inline void GlobalNamespace::CurrencyStashMapObject::OnRedeemButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyStashMapObject*>::get(),
                                                                             "OnRedeemButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CurrencyStashMapObject::OnRedeemSuccess(int32_t currencyAmount, ::StringW stashID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyStashMapObject*>::get(), "OnRedeemSuccess", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currencyAmount, stashID);
}
inline void GlobalNamespace::CurrencyStashMapObject::OnReceiveSimpleCustomMessage(bool sentByMasterPlayer, ::StringW payload) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyStashMapObject*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sentByMasterPlayer, payload);
}
inline void GlobalNamespace::CurrencyStashMapObject::OpenStash(int32_t currencyAmount, bool isMaster) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyStashMapObject*>::get(), "OpenStash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currencyAmount, isMaster);
}
inline void GlobalNamespace::CurrencyStashMapObject::OnRedeemFailure() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyStashMapObject*>::get(),
                                                                             "OnRedeemFailure", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::CurrencyStashMapObject::OpenCompartmentRoutine(::UnityEngine::Vector3 initialTransformation,
                                                                                                           ::GlobalNamespace::__CurrencyStashMapObject__CompartmentData compartment,
                                                                                                           int32_t currencyAmount, bool isMaster) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyStashMapObject*>::get(), "OpenCompartmentRoutine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__CurrencyStashMapObject__CompartmentData>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, initialTransformation, compartment, currencyAmount, isMaster);
}
inline void GlobalNamespace::CurrencyStashMapObject::SetAllCompartmentOpeness(float_t target) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyStashMapObject*>::get(), "SetAllCompartmentOpeness",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target);
}
inline bool GlobalNamespace::CurrencyStashMapObject::AllowsBatching() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyStashMapObject*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::CurrencyStashMapObject::SetSharedMaterials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> newMaterials) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyStashMapObject*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newMaterials);
}
inline void GlobalNamespace::CurrencyStashMapObject::SetRenderersActive(bool newActive) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyStashMapObject*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newActive);
}
inline ::GlobalNamespace::CurrencyStashMapObject* GlobalNamespace::CurrencyStashMapObject::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CurrencyStashMapObject*>());
}
inline void GlobalNamespace::CurrencyStashMapObject::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyStashMapObject*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CurrencyStashMapObject::CurrencyStashMapObject() {}
