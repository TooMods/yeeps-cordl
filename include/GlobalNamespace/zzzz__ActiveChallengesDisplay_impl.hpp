#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ActiveChallengesDisplay_def.hpp"
#include "GlobalNamespace/zzzz__ActiveChallenge_def.hpp"
#include "GlobalNamespace/zzzz__ActiveChallengesDisplay_def.hpp"
#include "GlobalNamespace/zzzz__ChallengeListItem_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__ActiveChallengesDisplay____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ActiveChallengesDisplay____c::*)()>(
    &::GlobalNamespace::__ActiveChallengesDisplay____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27581b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ActiveChallengesDisplay____c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ActiveChallengesDisplay____c._OnActiveChallengesUpdated_b__10_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__ActiveChallengesDisplay____c::*)(
    ::GlobalNamespace::ActiveChallenge*, ::GlobalNamespace::ActiveChallenge*)>(&::GlobalNamespace::__ActiveChallengesDisplay____c::_OnActiveChallengesUpdated_b__10_0)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x27581bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ActiveChallengesDisplay____c*>::get(),
                                                 "<OnActiveChallengesUpdated>b__10_0", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ActiveChallenge*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ActiveChallenge*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__ActiveChallengesDisplay____c::setStaticF___9(::GlobalNamespace::__ActiveChallengesDisplay____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__ActiveChallengesDisplay____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ActiveChallengesDisplay____c*>::get>(
      std::forward<::GlobalNamespace::__ActiveChallengesDisplay____c*>(value));
}
inline ::GlobalNamespace::__ActiveChallengesDisplay____c* GlobalNamespace::__ActiveChallengesDisplay____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__ActiveChallengesDisplay____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ActiveChallengesDisplay____c*>::get>();
}
inline void GlobalNamespace::__ActiveChallengesDisplay____c::setStaticF___9__10_0(::System::Comparison_1<::GlobalNamespace::ActiveChallenge*>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::GlobalNamespace::ActiveChallenge*>*, "<>9__10_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ActiveChallengesDisplay____c*>::get>(
      std::forward<::System::Comparison_1<::GlobalNamespace::ActiveChallenge*>*>(value));
}
inline ::System::Comparison_1<::GlobalNamespace::ActiveChallenge*>* GlobalNamespace::__ActiveChallengesDisplay____c::getStaticF___9__10_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::GlobalNamespace::ActiveChallenge*>*, "<>9__10_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ActiveChallengesDisplay____c*>::get>();
}
inline ::GlobalNamespace::__ActiveChallengesDisplay____c* GlobalNamespace::__ActiveChallengesDisplay____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ActiveChallengesDisplay____c*>());
}
inline void GlobalNamespace::__ActiveChallengesDisplay____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ActiveChallengesDisplay____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::__ActiveChallengesDisplay____c::_OnActiveChallengesUpdated_b__10_0(::GlobalNamespace::ActiveChallenge* a, ::GlobalNamespace::ActiveChallenge* b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ActiveChallengesDisplay____c*>::get(), "<OnActiveChallengesUpdated>b__10_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ActiveChallenge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ActiveChallenge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, a, b);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ActiveChallengesDisplay____c::__ActiveChallengesDisplay____c() {}
//  Writing Method size for method: ::GlobalNamespace::ActiveChallengesDisplay.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ActiveChallengesDisplay::*)()>(&::GlobalNamespace::ActiveChallengesDisplay::OnEnable)> {
  constexpr static std::size_t size = 0x634;
  constexpr static std::size_t addrs = 0x2756e20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ActiveChallengesDisplay*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ActiveChallengesDisplay.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ActiveChallengesDisplay::*)()>(&::GlobalNamespace::ActiveChallengesDisplay::OnDisable)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2757d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ActiveChallengesDisplay*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ActiveChallengesDisplay.OnActiveChallengesUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ActiveChallengesDisplay::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ActiveChallenge*>*)>(&::GlobalNamespace::ActiveChallengesDisplay::OnActiveChallengesUpdated)> {
  constexpr static std::size_t size = 0x584;
  constexpr static std::size_t addrs = 0x2757580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ActiveChallengesDisplay*>::get(), "OnActiveChallengesUpdated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ActiveChallenge*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ActiveChallengesDisplay.OnHasTimeUntilNextRotationUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ActiveChallengesDisplay::*)(bool)>(
    &::GlobalNamespace::ActiveChallengesDisplay::OnHasTimeUntilNextRotationUpdated)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2757bc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ActiveChallengesDisplay*>::get(), "OnHasTimeUntilNextRotationUpdated",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ActiveChallengesDisplay.OnTimeUntilNextRotationUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ActiveChallengesDisplay::*)(::System::TimeSpan)>(
    &::GlobalNamespace::ActiveChallengesDisplay::OnTimeUntilNextRotationUpdated)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2757cbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ActiveChallengesDisplay*>::get(), "OnTimeUntilNextRotationUpdated",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ActiveChallengesDisplay.OnRewardGiven
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ActiveChallengesDisplay::*)(int32_t)>(
    &::GlobalNamespace::ActiveChallengesDisplay::OnRewardGiven)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2758028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ActiveChallengesDisplay*>::get(), "OnRewardGiven",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ActiveChallengesDisplay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ActiveChallengesDisplay::*)()>(&::GlobalNamespace::ActiveChallengesDisplay::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2758148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ActiveChallengesDisplay*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::ActiveChallengesDisplay::__cordl_internal_get_countdownText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___countdownText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::ActiveChallengesDisplay::__cordl_internal_get_countdownText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___countdownText;
}
constexpr void GlobalNamespace::ActiveChallengesDisplay::__cordl_internal_set_countdownText(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___countdownText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::ActiveChallengesDisplay::__cordl_internal_get_challengeListItemPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___challengeListItemPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::ActiveChallengesDisplay::__cordl_internal_get_challengeListItemPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___challengeListItemPrefab;
}
constexpr void GlobalNamespace::ActiveChallengesDisplay::__cordl_internal_set_challengeListItemPrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___challengeListItemPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ActiveChallengesDisplay::__cordl_internal_get_challengeListContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___challengeListContainer;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ActiveChallengesDisplay::__cordl_internal_get_challengeListContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___challengeListContainer;
}
constexpr void GlobalNamespace::ActiveChallengesDisplay::__cordl_internal_set_challengeListContainer(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___challengeListContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ActiveChallengesDisplay::__cordl_internal_get_rewardDispensePoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rewardDispensePoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ActiveChallengesDisplay::__cordl_internal_get_rewardDispensePoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rewardDispensePoint;
}
constexpr void GlobalNamespace::ActiveChallengesDisplay::__cordl_internal_set_rewardDispensePoint(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rewardDispensePoint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::ActiveChallengesDisplay::__cordl_internal_get_dispenseSoundKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dispenseSoundKey;
}
constexpr ::StringW const& GlobalNamespace::ActiveChallengesDisplay::__cordl_internal_get_dispenseSoundKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dispenseSoundKey;
}
constexpr void GlobalNamespace::ActiveChallengesDisplay::__cordl_internal_set_dispenseSoundKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dispenseSoundKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ChallengeListItem>>*& GlobalNamespace::ActiveChallengesDisplay::__cordl_internal_get_challengeListItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___challengeListItems;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ChallengeListItem>>*> const&
GlobalNamespace::ActiveChallengesDisplay::__cordl_internal_get_challengeListItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___challengeListItems;
}
constexpr void GlobalNamespace::ActiveChallengesDisplay::__cordl_internal_set_challengeListItems(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ChallengeListItem>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___challengeListItems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::ActiveChallengesDisplay::__cordl_internal_get_hasClearedInitial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasClearedInitial;
}
constexpr bool const& GlobalNamespace::ActiveChallengesDisplay::__cordl_internal_get_hasClearedInitial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasClearedInitial;
}
constexpr void GlobalNamespace::ActiveChallengesDisplay::__cordl_internal_set_hasClearedInitial(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasClearedInitial = value;
}
inline void GlobalNamespace::ActiveChallengesDisplay::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ActiveChallengesDisplay*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ActiveChallengesDisplay::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ActiveChallengesDisplay*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ActiveChallengesDisplay::OnActiveChallengesUpdated(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ActiveChallenge*>* activeChallenges) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ActiveChallengesDisplay*>::get(), "OnActiveChallengesUpdated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ActiveChallenge*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, activeChallenges);
}
inline void GlobalNamespace::ActiveChallengesDisplay::OnHasTimeUntilNextRotationUpdated(bool hasTimeUntilNextRotation) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ActiveChallengesDisplay*>::get(), "OnHasTimeUntilNextRotationUpdated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hasTimeUntilNextRotation);
}
inline void GlobalNamespace::ActiveChallengesDisplay::OnTimeUntilNextRotationUpdated(::System::TimeSpan timeUntilNextRotation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ActiveChallengesDisplay*>::get(), "OnTimeUntilNextRotationUpdated",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timeUntilNextRotation);
}
inline void GlobalNamespace::ActiveChallengesDisplay::OnRewardGiven(int32_t amount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ActiveChallengesDisplay*>::get(), "OnRewardGiven",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, amount);
}
inline ::GlobalNamespace::ActiveChallengesDisplay* GlobalNamespace::ActiveChallengesDisplay::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ActiveChallengesDisplay*>());
}
inline void GlobalNamespace::ActiveChallengesDisplay::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ActiveChallengesDisplay*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ActiveChallengesDisplay::ActiveChallengesDisplay() {}
