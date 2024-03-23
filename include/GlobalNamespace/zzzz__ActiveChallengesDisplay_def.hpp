#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ActiveChallengesDisplay)
namespace GlobalNamespace {
class ActiveChallenge;
}
namespace GlobalNamespace {
class ChallengeListItem;
}
namespace GlobalNamespace {
class __ActiveChallengesDisplay____c;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
struct TimeSpan;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class ActiveChallengesDisplay;
}
namespace GlobalNamespace {
class __ActiveChallengesDisplay____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ActiveChallengesDisplay);
MARK_REF_PTR_T(::GlobalNamespace::__ActiveChallengesDisplay____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ActiveChallengesDisplay::<>c*
class CORDL_TYPE __ActiveChallengesDisplay____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__ActiveChallengesDisplay____c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__10_0, put = setStaticF___9__10_0))::System::Comparison_1<::GlobalNamespace::ActiveChallenge*>* __9__10_0;

  static inline ::GlobalNamespace::__ActiveChallengesDisplay____c* New_ctor();

  /// @brief Method <OnActiveChallengesUpdated>b__10_0, addr 0x27581bc, size 0x138, virtual false, abstract: false, final false
  inline int32_t _OnActiveChallengesUpdated_b__10_0(::GlobalNamespace::ActiveChallenge* a, ::GlobalNamespace::ActiveChallenge* b);

  /// @brief Method .ctor, addr 0x27581b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__ActiveChallengesDisplay____c* getStaticF___9();

  static inline ::System::Comparison_1<::GlobalNamespace::ActiveChallenge*>* getStaticF___9__10_0();

  static inline void setStaticF___9(::GlobalNamespace::__ActiveChallengesDisplay____c* value);

  static inline void setStaticF___9__10_0(::System::Comparison_1<::GlobalNamespace::ActiveChallenge*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ActiveChallengesDisplay____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ActiveChallengesDisplay____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ActiveChallengesDisplay____c(__ActiveChallengesDisplay____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ActiveChallengesDisplay____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ActiveChallengesDisplay____c(__ActiveChallengesDisplay____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ActiveChallengesDisplay____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ActiveChallengesDisplay
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 73, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ActiveChallengesDisplay*
class CORDL_TYPE ActiveChallengesDisplay : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::GlobalNamespace::__ActiveChallengesDisplay____c;

  /// @brief Field challengeListContainer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_challengeListContainer, put = __cordl_internal_set_challengeListContainer))::UnityW<::UnityEngine::Transform> challengeListContainer;

  /// @brief Field challengeListItemPrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_challengeListItemPrefab, put = __cordl_internal_set_challengeListItemPrefab))::UnityW<::UnityEngine::GameObject> challengeListItemPrefab;

  /// @brief Field challengeListItems, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_challengeListItems,
                      put = __cordl_internal_set_challengeListItems))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ChallengeListItem>>* challengeListItems;

  /// @brief Field countdownText, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_countdownText, put = __cordl_internal_set_countdownText))::UnityW<::UnityEngine::UI::Text> countdownText;

  /// @brief Field dispenseSoundKey, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_dispenseSoundKey, put = __cordl_internal_set_dispenseSoundKey))::StringW dispenseSoundKey;

  /// @brief Field hasClearedInitial, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_hasClearedInitial, put = __cordl_internal_set_hasClearedInitial)) bool hasClearedInitial;

  /// @brief Field rewardDispensePoint, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_rewardDispensePoint, put = __cordl_internal_set_rewardDispensePoint))::UnityW<::UnityEngine::Transform> rewardDispensePoint;

  static inline ::GlobalNamespace::ActiveChallengesDisplay* New_ctor();

  /// @brief Method OnActiveChallengesUpdated, addr 0x2757580, size 0x584, virtual false, abstract: false, final false
  inline void OnActiveChallengesUpdated(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ActiveChallenge*>* activeChallenges);

  /// @brief Method OnDisable, addr 0x2757d44, size 0x254, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2756e20, size 0x634, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnHasTimeUntilNextRotationUpdated, addr 0x2757bc8, size 0x30, virtual false, abstract: false, final false
  inline void OnHasTimeUntilNextRotationUpdated(bool hasTimeUntilNextRotation);

  /// @brief Method OnRewardGiven, addr 0x2758028, size 0x120, virtual false, abstract: false, final false
  inline void OnRewardGiven(int32_t amount);

  /// @brief Method OnTimeUntilNextRotationUpdated, addr 0x2757cbc, size 0x88, virtual false, abstract: false, final false
  inline void OnTimeUntilNextRotationUpdated(::System::TimeSpan timeUntilNextRotation);

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_challengeListContainer() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_challengeListContainer();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_challengeListItemPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_challengeListItemPrefab();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ChallengeListItem>>*& __cordl_internal_get_challengeListItems();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ChallengeListItem>>*> const& __cordl_internal_get_challengeListItems() const;

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_countdownText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_countdownText();

  constexpr ::StringW const& __cordl_internal_get_dispenseSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_dispenseSoundKey();

  constexpr bool const& __cordl_internal_get_hasClearedInitial() const;

  constexpr bool& __cordl_internal_get_hasClearedInitial();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rewardDispensePoint() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rewardDispensePoint();

  constexpr void __cordl_internal_set_challengeListContainer(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_challengeListItemPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_challengeListItems(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ChallengeListItem>>* value);

  constexpr void __cordl_internal_set_countdownText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_dispenseSoundKey(::StringW value);

  constexpr void __cordl_internal_set_hasClearedInitial(bool value);

  constexpr void __cordl_internal_set_rewardDispensePoint(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x2758148, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ActiveChallengesDisplay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ActiveChallengesDisplay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ActiveChallengesDisplay(ActiveChallengesDisplay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ActiveChallengesDisplay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ActiveChallengesDisplay(ActiveChallengesDisplay const&) = delete;

  /// @brief Field countdownText, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___countdownText;

  /// @brief Field challengeListItemPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___challengeListItemPrefab;

  /// @brief Field challengeListContainer, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___challengeListContainer;

  /// @brief Field rewardDispensePoint, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___rewardDispensePoint;

  /// @brief Field dispenseSoundKey, offset: 0x38, size: 0x8, def value: None
  ::StringW ___dispenseSoundKey;

  /// @brief Field challengeListItems, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ChallengeListItem>>* ___challengeListItems;

  /// @brief Field hasClearedInitial, offset: 0x48, size: 0x1, def value: None
  bool ___hasClearedInitial;

  /// @brief Field maxChallenges offset 0xffffffff size 0x4
  static constexpr int32_t maxChallenges{ static_cast<int32_t>(0x3) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ActiveChallengesDisplay, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ActiveChallengesDisplay, ___countdownText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ActiveChallengesDisplay, ___challengeListItemPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ActiveChallengesDisplay, ___challengeListContainer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ActiveChallengesDisplay, ___rewardDispensePoint) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ActiveChallengesDisplay, ___dispenseSoundKey) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ActiveChallengesDisplay, ___challengeListItems) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ActiveChallengesDisplay, ___hasClearedInitial) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ActiveChallengesDisplay);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ActiveChallengesDisplay*, "", "ActiveChallengesDisplay");
NEED_NO_BOX(::GlobalNamespace::__ActiveChallengesDisplay____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ActiveChallengesDisplay____c*, "", "ActiveChallengesDisplay/<>c");
