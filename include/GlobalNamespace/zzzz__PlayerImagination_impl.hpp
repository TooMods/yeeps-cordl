#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerImagination_def.hpp"
#include "GlobalNamespace/zzzz__AnchoredRotator_def.hpp"
#include "GlobalNamespace/zzzz__ImaginationPromptDisplay_def.hpp"
#include "GlobalNamespace/zzzz__ItemDespawnZone_def.hpp"
#include "GlobalNamespace/zzzz__Item_def.hpp"
#include "GlobalNamespace/zzzz__Pattern_def.hpp"
#include "GlobalNamespace/zzzz__PlayerImagination_def.hpp"
#include "GlobalNamespace/zzzz__ScrollingPatternLayout_def.hpp"
#include "GlobalNamespace/zzzz__StackPatternLayout_def.hpp"
#include "GlobalNamespace/zzzz__SymbolThoughtBubble_def.hpp"
#include "GlobalNamespace/zzzz__ThoughtBubble_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__PlayerImagination____c__DisplayClass25_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerImagination____c__DisplayClass25_0::*)()>(
    &::GlobalNamespace::__PlayerImagination____c__DisplayClass25_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf44cc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerImagination____c__DisplayClass25_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerImagination____c__DisplayClass25_0._Start_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerImagination____c__DisplayClass25_0::*)(::GlobalNamespace::ThoughtBubble*)>(
    &::GlobalNamespace::__PlayerImagination____c__DisplayClass25_0::_Start_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xf47e64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerImagination____c__DisplayClass25_0*>::get(), "<Start>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ThoughtBubble*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__PlayerImagination____c__DisplayClass25_0::__cordl_internal_get_currentIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentIndex;
}
constexpr int32_t const& GlobalNamespace::__PlayerImagination____c__DisplayClass25_0::__cordl_internal_get_currentIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentIndex;
}
constexpr void GlobalNamespace::__PlayerImagination____c__DisplayClass25_0::__cordl_internal_set_currentIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentIndex = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerImagination>& GlobalNamespace::__PlayerImagination____c__DisplayClass25_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::PlayerImagination> const& GlobalNamespace::__PlayerImagination____c__DisplayClass25_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__PlayerImagination____c__DisplayClass25_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PlayerImagination> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__PlayerImagination____c__DisplayClass25_0* GlobalNamespace::__PlayerImagination____c__DisplayClass25_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerImagination____c__DisplayClass25_0*>());
}
inline void GlobalNamespace::__PlayerImagination____c__DisplayClass25_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerImagination____c__DisplayClass25_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PlayerImagination____c__DisplayClass25_0::_Start_b__0(::GlobalNamespace::ThoughtBubble* curThoughtBubble) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerImagination____c__DisplayClass25_0*>::get(), "<Start>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ThoughtBubble*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, curThoughtBubble);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerImagination____c__DisplayClass25_0::__PlayerImagination____c__DisplayClass25_0() {}
//  Writing Method size for method: ::GlobalNamespace::__PlayerImagination____c__DisplayClass25_1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerImagination____c__DisplayClass25_1::*)()>(
    &::GlobalNamespace::__PlayerImagination____c__DisplayClass25_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf44d6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerImagination____c__DisplayClass25_1*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerImagination____c__DisplayClass25_1._Start_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerImagination____c__DisplayClass25_1::*)(::GlobalNamespace::ThoughtBubble*)>(
    &::GlobalNamespace::__PlayerImagination____c__DisplayClass25_1::_Start_b__1)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xf47e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerImagination____c__DisplayClass25_1*>::get(), "<Start>b__1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ThoughtBubble*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerImagination____c__DisplayClass25_1._Start_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerImagination____c__DisplayClass25_1::*)(::GlobalNamespace::ThoughtBubble*)>(
    &::GlobalNamespace::__PlayerImagination____c__DisplayClass25_1::_Start_b__2)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xf47eb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerImagination____c__DisplayClass25_1*>::get(), "<Start>b__2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ThoughtBubble*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__PlayerImagination____c__DisplayClass25_1::__cordl_internal_get_currentIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentIndex;
}
constexpr int32_t const& GlobalNamespace::__PlayerImagination____c__DisplayClass25_1::__cordl_internal_get_currentIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentIndex;
}
constexpr void GlobalNamespace::__PlayerImagination____c__DisplayClass25_1::__cordl_internal_set_currentIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentIndex = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerImagination>& GlobalNamespace::__PlayerImagination____c__DisplayClass25_1::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::PlayerImagination> const& GlobalNamespace::__PlayerImagination____c__DisplayClass25_1::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__PlayerImagination____c__DisplayClass25_1::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PlayerImagination> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__PlayerImagination____c__DisplayClass25_1* GlobalNamespace::__PlayerImagination____c__DisplayClass25_1::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerImagination____c__DisplayClass25_1*>());
}
inline void GlobalNamespace::__PlayerImagination____c__DisplayClass25_1::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerImagination____c__DisplayClass25_1*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PlayerImagination____c__DisplayClass25_1::_Start_b__1(::GlobalNamespace::ThoughtBubble* curThoughtBubble) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerImagination____c__DisplayClass25_1*>::get(), "<Start>b__1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ThoughtBubble*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, curThoughtBubble);
}
inline void GlobalNamespace::__PlayerImagination____c__DisplayClass25_1::_Start_b__2(::GlobalNamespace::ThoughtBubble* curThoughtBubble) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerImagination____c__DisplayClass25_1*>::get(), "<Start>b__2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ThoughtBubble*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, curThoughtBubble);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerImagination____c__DisplayClass25_1::__PlayerImagination____c__DisplayClass25_1() {}
//  Writing Method size for method: ::GlobalNamespace::__PlayerImagination____c__DisplayClass28_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerImagination____c__DisplayClass28_0::*)()>(
    &::GlobalNamespace::__PlayerImagination____c__DisplayClass28_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf4582c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerImagination____c__DisplayClass28_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerImagination____c__DisplayClass28_0._OnPermittedPatternsUpdated_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__PlayerImagination____c__DisplayClass28_0::*)(::GlobalNamespace::Pattern*)>(
    &::GlobalNamespace::__PlayerImagination____c__DisplayClass28_0::_OnPermittedPatternsUpdated_b__0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xf47edc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerImagination____c__DisplayClass28_0*>::get(), "<OnPermittedPatternsUpdated>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Pattern*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__Pattern__Type>*& GlobalNamespace::__PlayerImagination____c__DisplayClass28_0::__cordl_internal_get_permittedTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___permittedTypes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__Pattern__Type>*> const&
GlobalNamespace::__PlayerImagination____c__DisplayClass28_0::__cordl_internal_get_permittedTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___permittedTypes;
}
constexpr void GlobalNamespace::__PlayerImagination____c__DisplayClass28_0::__cordl_internal_set_permittedTypes(::System::Collections::Generic::List_1<::GlobalNamespace::__Pattern__Type>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___permittedTypes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Predicate_1<::GlobalNamespace::Pattern*>*& GlobalNamespace::__PlayerImagination____c__DisplayClass28_0::__cordl_internal_get___9__0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__0;
}
constexpr ::cordl_internals::to_const_pointer<::System::Predicate_1<::GlobalNamespace::Pattern*>*> const&
GlobalNamespace::__PlayerImagination____c__DisplayClass28_0::__cordl_internal_get___9__0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__0;
}
constexpr void GlobalNamespace::__PlayerImagination____c__DisplayClass28_0::__cordl_internal_set___9__0(::System::Predicate_1<::GlobalNamespace::Pattern*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__0)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__PlayerImagination____c__DisplayClass28_0* GlobalNamespace::__PlayerImagination____c__DisplayClass28_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerImagination____c__DisplayClass28_0*>());
}
inline void GlobalNamespace::__PlayerImagination____c__DisplayClass28_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerImagination____c__DisplayClass28_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__PlayerImagination____c__DisplayClass28_0::_OnPermittedPatternsUpdated_b__0(::GlobalNamespace::Pattern* pattern) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerImagination____c__DisplayClass28_0*>::get(), "<OnPermittedPatternsUpdated>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Pattern*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pattern);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerImagination____c__DisplayClass28_0::__PlayerImagination____c__DisplayClass28_0() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerImagination.SetIsOpen
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerImagination::*)(bool)>(&::GlobalNamespace::PlayerImagination::SetIsOpen)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xf444d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerImagination*>::get(), "SetIsOpen",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerImagination.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerImagination::*)()>(&::GlobalNamespace::PlayerImagination::Start)> {
  constexpr static std::size_t size = 0x6bc;
  constexpr static std::size_t addrs = 0xf44500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerImagination*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerImagination.OnStuffedItemDespawned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerImagination::*)(::GlobalNamespace::Item*)>(
    &::GlobalNamespace::PlayerImagination::OnStuffedItemDespawned)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xf45330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerImagination*>::get(), "OnStuffedItemDespawned", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Item*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerImagination.OnOwnedPatternsUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerImagination::*)()>(&::GlobalNamespace::PlayerImagination::OnOwnedPatternsUpdated)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xf4542c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerImagination*>::get(),
                                                                               "OnOwnedPatternsUpdated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerImagination.OnPermittedPatternsUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerImagination::*)(
    ::System::Collections::Generic::List_1<::GlobalNamespace::__Pattern__Type>*)>(&::GlobalNamespace::PlayerImagination::OnPermittedPatternsUpdated)> {
  constexpr static std::size_t size = 0x5bc;
  constexpr static std::size_t addrs = 0xf44d74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerImagination*>::get(), "OnPermittedPatternsUpdated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__Pattern__Type>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerImagination.OnItemCrafted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerImagination::*)(::GlobalNamespace::ThoughtBubble*)>(
    &::GlobalNamespace::PlayerImagination::OnItemCrafted)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0xf464d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerImagination*>::get(), "OnItemCrafted", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ThoughtBubble*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerImagination.OnImaginationPatternThoughtBubbleTapped
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerImagination::*)(::GlobalNamespace::ThoughtBubble*)>(
    &::GlobalNamespace::PlayerImagination::OnImaginationPatternThoughtBubbleTapped)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xf46ab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerImagination*>::get(), "OnImaginationPatternThoughtBubbleTapped", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ThoughtBubble*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerImagination.OnMostRecentThoughtBubbleTapped
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerImagination::*)(::GlobalNamespace::ThoughtBubble*, int32_t)>(
    &::GlobalNamespace::PlayerImagination::OnMostRecentThoughtBubbleTapped)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xf46ab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerImagination*>::get(), "OnMostRecentThoughtBubbleTapped", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ThoughtBubble*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerImagination.OnCloseThoughtBubbleActivated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerImagination::*)(::GlobalNamespace::ThoughtBubble*, int32_t)>(
    &::GlobalNamespace::PlayerImagination::OnCloseThoughtBubbleActivated)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xf46f84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerImagination*>::get(), "OnCloseThoughtBubbleActivated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ThoughtBubble*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerImagination.Open
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerImagination::*)(int32_t)>(&::GlobalNamespace::PlayerImagination::Open)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0xf46b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerImagination*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerImagination.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerImagination::*)(bool)>(&::GlobalNamespace::PlayerImagination::Close)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0xf46804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerImagination*>::get(), "Close",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerImagination.OnHeadSelectExit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerImagination::*)()>(&::GlobalNamespace::PlayerImagination::OnHeadSelectExit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xf47e40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerImagination*>::get(), "OnHeadSelectExit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerImagination.OnHeadFirstHoverEnter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerImagination::*)()>(&::GlobalNamespace::PlayerImagination::OnHeadFirstHoverEnter)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xf47e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerImagination*>::get(),
                                                                               "OnHeadFirstHoverEnter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerImagination.OnHeadFirstHoverExit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerImagination::*)()>(&::GlobalNamespace::PlayerImagination::OnHeadFirstHoverExit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xf47e48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerImagination*>::get(),
                                                                               "OnHeadFirstHoverExit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerImagination._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerImagination::*)()>(&::GlobalNamespace::PlayerImagination::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xf47e4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerImagination*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AnchoredRotator>& GlobalNamespace::PlayerImagination::__cordl_internal_get_anchoredRotator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anchoredRotator;
}
constexpr ::UnityW<::GlobalNamespace::AnchoredRotator> const& GlobalNamespace::PlayerImagination::__cordl_internal_get_anchoredRotator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anchoredRotator;
}
constexpr void GlobalNamespace::PlayerImagination::__cordl_internal_set_anchoredRotator(::UnityW<::GlobalNamespace::AnchoredRotator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___anchoredRotator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ImaginationPromptDisplay>& GlobalNamespace::PlayerImagination::__cordl_internal_get_imaginationPromptDisplay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___imaginationPromptDisplay;
}
constexpr ::UnityW<::GlobalNamespace::ImaginationPromptDisplay> const& GlobalNamespace::PlayerImagination::__cordl_internal_get_imaginationPromptDisplay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___imaginationPromptDisplay;
}
constexpr void GlobalNamespace::PlayerImagination::__cordl_internal_set_imaginationPromptDisplay(::UnityW<::GlobalNamespace::ImaginationPromptDisplay> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___imaginationPromptDisplay)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ItemDespawnZone>& GlobalNamespace::PlayerImagination::__cordl_internal_get_stuffedItemDespawnZone() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stuffedItemDespawnZone;
}
constexpr ::UnityW<::GlobalNamespace::ItemDespawnZone> const& GlobalNamespace::PlayerImagination::__cordl_internal_get_stuffedItemDespawnZone() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stuffedItemDespawnZone;
}
constexpr void GlobalNamespace::PlayerImagination::__cordl_internal_set_stuffedItemDespawnZone(::UnityW<::GlobalNamespace::ItemDespawnZone> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stuffedItemDespawnZone)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ScrollingPatternLayout>& GlobalNamespace::PlayerImagination::__cordl_internal_get_allThoughtsLayout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allThoughtsLayout;
}
constexpr ::UnityW<::GlobalNamespace::ScrollingPatternLayout> const& GlobalNamespace::PlayerImagination::__cordl_internal_get_allThoughtsLayout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allThoughtsLayout;
}
constexpr void GlobalNamespace::PlayerImagination::__cordl_internal_set_allThoughtsLayout(::UnityW<::GlobalNamespace::ScrollingPatternLayout> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___allThoughtsLayout)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::StackPatternLayout>& GlobalNamespace::PlayerImagination::__cordl_internal_get_recentThoughtsLayout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recentThoughtsLayout;
}
constexpr ::UnityW<::GlobalNamespace::StackPatternLayout> const& GlobalNamespace::PlayerImagination::__cordl_internal_get_recentThoughtsLayout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recentThoughtsLayout;
}
constexpr void GlobalNamespace::PlayerImagination::__cordl_internal_set_recentThoughtsLayout(::UnityW<::GlobalNamespace::StackPatternLayout> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___recentThoughtsLayout)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::StackPatternLayout>, ::Array<::UnityW<::GlobalNamespace::StackPatternLayout>>*>&
GlobalNamespace::PlayerImagination::__cordl_internal_get_mostRececentThoughtLayouts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mostRececentThoughtLayouts;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::StackPatternLayout>, ::Array<::UnityW<::GlobalNamespace::StackPatternLayout>>*> const&
GlobalNamespace::PlayerImagination::__cordl_internal_get_mostRececentThoughtLayouts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mostRececentThoughtLayouts;
}
constexpr void GlobalNamespace::PlayerImagination::__cordl_internal_set_mostRececentThoughtLayouts(
    ::ArrayW<::UnityW<::GlobalNamespace::StackPatternLayout>, ::Array<::UnityW<::GlobalNamespace::StackPatternLayout>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mostRececentThoughtLayouts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SymbolThoughtBubble>, ::Array<::UnityW<::GlobalNamespace::SymbolThoughtBubble>>*>&
GlobalNamespace::PlayerImagination::__cordl_internal_get_closeThoughtBubbles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closeThoughtBubbles;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SymbolThoughtBubble>, ::Array<::UnityW<::GlobalNamespace::SymbolThoughtBubble>>*> const&
GlobalNamespace::PlayerImagination::__cordl_internal_get_closeThoughtBubbles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closeThoughtBubbles;
}
constexpr void GlobalNamespace::PlayerImagination::__cordl_internal_set_closeThoughtBubbles(
    ::ArrayW<::UnityW<::GlobalNamespace::SymbolThoughtBubble>, ::Array<::UnityW<::GlobalNamespace::SymbolThoughtBubble>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___closeThoughtBubbles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__ScrollingPatternLayout__SaveState, ::Array<::GlobalNamespace::__ScrollingPatternLayout__SaveState>*>&
GlobalNamespace::PlayerImagination::__cordl_internal_get_savedScrollStates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___savedScrollStates;
}
constexpr ::ArrayW<::GlobalNamespace::__ScrollingPatternLayout__SaveState, ::Array<::GlobalNamespace::__ScrollingPatternLayout__SaveState>*> const&
GlobalNamespace::PlayerImagination::__cordl_internal_get_savedScrollStates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___savedScrollStates;
}
constexpr void GlobalNamespace::PlayerImagination::__cordl_internal_set_savedScrollStates(
    ::ArrayW<::GlobalNamespace::__ScrollingPatternLayout__SaveState, ::Array<::GlobalNamespace::__ScrollingPatternLayout__SaveState>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___savedScrollStates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>*, ::Array<::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>*>*>&
GlobalNamespace::PlayerImagination::__cordl_internal_get_savedMostRecentPatterns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___savedMostRecentPatterns;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>*, ::Array<::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>*>*> const&
GlobalNamespace::PlayerImagination::__cordl_internal_get_savedMostRecentPatterns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___savedMostRecentPatterns;
}
constexpr void GlobalNamespace::PlayerImagination::__cordl_internal_set_savedMostRecentPatterns(
    ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>*, ::Array<::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___savedMostRecentPatterns)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& GlobalNamespace::PlayerImagination::__cordl_internal_get_openFlowDirections() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___openFlowDirections;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& GlobalNamespace::PlayerImagination::__cordl_internal_get_openFlowDirections() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___openFlowDirections;
}
constexpr void GlobalNamespace::PlayerImagination::__cordl_internal_set_openFlowDirections(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___openFlowDirections)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::PlayerImagination::__cordl_internal_get_openFlowCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___openFlowCurve;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& GlobalNamespace::PlayerImagination::__cordl_internal_get_openFlowCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___openFlowCurve;
}
constexpr void GlobalNamespace::PlayerImagination::__cordl_internal_set_openFlowCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___openFlowCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::PlayerImagination::__cordl_internal_get_openFlowDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___openFlowDuration;
}
constexpr float_t const& GlobalNamespace::PlayerImagination::__cordl_internal_get_openFlowDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___openFlowDuration;
}
constexpr void GlobalNamespace::PlayerImagination::__cordl_internal_set_openFlowDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___openFlowDuration = value;
}
constexpr float_t& GlobalNamespace::PlayerImagination::__cordl_internal_get_openFlowDurationVariance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___openFlowDurationVariance;
}
constexpr float_t const& GlobalNamespace::PlayerImagination::__cordl_internal_get_openFlowDurationVariance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___openFlowDurationVariance;
}
constexpr void GlobalNamespace::PlayerImagination::__cordl_internal_set_openFlowDurationVariance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___openFlowDurationVariance = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& GlobalNamespace::PlayerImagination::__cordl_internal_get_closeFlowDirections() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closeFlowDirections;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& GlobalNamespace::PlayerImagination::__cordl_internal_get_closeFlowDirections() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closeFlowDirections;
}
constexpr void GlobalNamespace::PlayerImagination::__cordl_internal_set_closeFlowDirections(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___closeFlowDirections)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::PlayerImagination::__cordl_internal_get_closeFlowCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closeFlowCurve;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& GlobalNamespace::PlayerImagination::__cordl_internal_get_closeFlowCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closeFlowCurve;
}
constexpr void GlobalNamespace::PlayerImagination::__cordl_internal_set_closeFlowCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___closeFlowCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::PlayerImagination::__cordl_internal_get_closeFlowDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closeFlowDuration;
}
constexpr float_t const& GlobalNamespace::PlayerImagination::__cordl_internal_get_closeFlowDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closeFlowDuration;
}
constexpr void GlobalNamespace::PlayerImagination::__cordl_internal_set_closeFlowDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___closeFlowDuration = value;
}
constexpr float_t& GlobalNamespace::PlayerImagination::__cordl_internal_get_closeFlowDurationVariace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closeFlowDurationVariace;
}
constexpr float_t const& GlobalNamespace::PlayerImagination::__cordl_internal_get_closeFlowDurationVariace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closeFlowDurationVariace;
}
constexpr void GlobalNamespace::PlayerImagination::__cordl_internal_set_closeFlowDurationVariace(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___closeFlowDurationVariace = value;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& GlobalNamespace::PlayerImagination::__cordl_internal_get_defaultRecentPatternKeys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultRecentPatternKeys;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& GlobalNamespace::PlayerImagination::__cordl_internal_get_defaultRecentPatternKeys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultRecentPatternKeys;
}
constexpr void GlobalNamespace::PlayerImagination::__cordl_internal_set_defaultRecentPatternKeys(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___defaultRecentPatternKeys)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>*& GlobalNamespace::PlayerImagination::__cordl_internal_get_defaultRecentPatterns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultRecentPatterns;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>*> const&
GlobalNamespace::PlayerImagination::__cordl_internal_get_defaultRecentPatterns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultRecentPatterns;
}
constexpr void GlobalNamespace::PlayerImagination::__cordl_internal_set_defaultRecentPatterns(::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___defaultRecentPatterns)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::PlayerImagination::__cordl_internal_get_openSoundKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___openSoundKey;
}
constexpr ::StringW const& GlobalNamespace::PlayerImagination::__cordl_internal_get_openSoundKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___openSoundKey;
}
constexpr void GlobalNamespace::PlayerImagination::__cordl_internal_set_openSoundKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___openSoundKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::PlayerImagination::__cordl_internal_get_closeSoundKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closeSoundKey;
}
constexpr ::StringW const& GlobalNamespace::PlayerImagination::__cordl_internal_get_closeSoundKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closeSoundKey;
}
constexpr void GlobalNamespace::PlayerImagination::__cordl_internal_set_closeSoundKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___closeSoundKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::PlayerImagination::__cordl_internal_get_isOpen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isOpen;
}
constexpr bool const& GlobalNamespace::PlayerImagination::__cordl_internal_get_isOpen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isOpen;
}
constexpr void GlobalNamespace::PlayerImagination::__cordl_internal_set_isOpen(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isOpen = value;
}
constexpr int32_t& GlobalNamespace::PlayerImagination::__cordl_internal_get_openIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___openIndex;
}
constexpr int32_t const& GlobalNamespace::PlayerImagination::__cordl_internal_get_openIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___openIndex;
}
constexpr void GlobalNamespace::PlayerImagination::__cordl_internal_set_openIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___openIndex = value;
}
inline void GlobalNamespace::PlayerImagination::SetIsOpen(bool newIsOpen) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerImagination*>::get(), "SetIsOpen",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIsOpen);
}
inline void GlobalNamespace::PlayerImagination::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerImagination*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerImagination::OnStuffedItemDespawned(::GlobalNamespace::Item* item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerImagination*>::get(), "OnStuffedItemDespawned", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Item*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
inline void GlobalNamespace::PlayerImagination::OnOwnedPatternsUpdated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerImagination*>::get(),
                                                                             "OnOwnedPatternsUpdated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerImagination::OnPermittedPatternsUpdated(::System::Collections::Generic::List_1<::GlobalNamespace::__Pattern__Type>* permittedTypes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerImagination*>::get(), "OnPermittedPatternsUpdated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__Pattern__Type>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, permittedTypes);
}
inline void GlobalNamespace::PlayerImagination::OnItemCrafted(::GlobalNamespace::ThoughtBubble* thoughtBubble) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerImagination*>::get(), "OnItemCrafted", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ThoughtBubble*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, thoughtBubble);
}
inline void GlobalNamespace::PlayerImagination::OnImaginationPatternThoughtBubbleTapped(::GlobalNamespace::ThoughtBubble* thoughtBubble) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerImagination*>::get(), "OnImaginationPatternThoughtBubbleTapped", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ThoughtBubble*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, thoughtBubble);
}
inline void GlobalNamespace::PlayerImagination::OnMostRecentThoughtBubbleTapped(::GlobalNamespace::ThoughtBubble* thoughtBubble, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerImagination*>::get(), "OnMostRecentThoughtBubbleTapped", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ThoughtBubble*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, thoughtBubble, index);
}
inline void GlobalNamespace::PlayerImagination::OnCloseThoughtBubbleActivated(::GlobalNamespace::ThoughtBubble* thoughtBubble, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerImagination*>::get(), "OnCloseThoughtBubbleActivated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ThoughtBubble*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, thoughtBubble, index);
}
inline void GlobalNamespace::PlayerImagination::Open(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerImagination*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
/// @param isSilent: bool (default: false)
inline void GlobalNamespace::PlayerImagination::Close(bool isSilent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerImagination*>::get(), "Close", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isSilent);
}
inline void GlobalNamespace::PlayerImagination::OnHeadSelectExit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerImagination*>::get(), "OnHeadSelectExit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerImagination::OnHeadFirstHoverEnter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerImagination*>::get(),
                                                                             "OnHeadFirstHoverEnter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerImagination::OnHeadFirstHoverExit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerImagination*>::get(),
                                                                             "OnHeadFirstHoverExit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerImagination* GlobalNamespace::PlayerImagination::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerImagination*>());
}
inline void GlobalNamespace::PlayerImagination::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerImagination*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerImagination::PlayerImagination() {}
