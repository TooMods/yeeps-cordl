#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PrivateRoomEntranceConsole)
namespace GlobalNamespace {
class TravelToFriendDisplay;
}
namespace GlobalNamespace {
struct __PlayerAppearanceManager__PlayerAppearance;
}
namespace GlobalNamespace {
class __PrivateRoomEntranceConsole____c__DisplayClass10_0;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class PrivateRoomEntranceConsole;
}
namespace GlobalNamespace {
class __PrivateRoomEntranceConsole____c__DisplayClass10_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PrivateRoomEntranceConsole);
MARK_REF_PTR_T(::GlobalNamespace::__PrivateRoomEntranceConsole____c__DisplayClass10_0);
// Type: ::<>c__DisplayClass10_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PrivateRoomEntranceConsole::<>c__DisplayClass10_0*
class CORDL_TYPE __PrivateRoomEntranceConsole____c__DisplayClass10_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::PrivateRoomEntranceConsole> __4__this;

  /// @brief Field curFetchPlayerApperanceAccountID, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_curFetchPlayerApperanceAccountID, put = __cordl_internal_set_curFetchPlayerApperanceAccountID))::StringW curFetchPlayerApperanceAccountID;

  /// @brief Field fromLoad, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_fromLoad, put = __cordl_internal_set_fromLoad)) bool fromLoad;

  static inline ::GlobalNamespace::__PrivateRoomEntranceConsole____c__DisplayClass10_0* New_ctor();

  /// @brief Method <SelectDestination>b__0, addr 0x1554954, size 0x1f4, virtual false, abstract: false, final false
  inline void _SelectDestination_b__0(::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance playerAppearance);

  /// @brief Method <SelectDestination>b__1, addr 0x1554b48, size 0xb4, virtual false, abstract: false, final false
  inline void _SelectDestination_b__1(::StringW errType);

  constexpr ::UnityW<::GlobalNamespace::PrivateRoomEntranceConsole> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::PrivateRoomEntranceConsole>& __cordl_internal_get___4__this();

  constexpr ::StringW const& __cordl_internal_get_curFetchPlayerApperanceAccountID() const;

  constexpr ::StringW& __cordl_internal_get_curFetchPlayerApperanceAccountID();

  constexpr bool const& __cordl_internal_get_fromLoad() const;

  constexpr bool& __cordl_internal_get_fromLoad();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PrivateRoomEntranceConsole> value);

  constexpr void __cordl_internal_set_curFetchPlayerApperanceAccountID(::StringW value);

  constexpr void __cordl_internal_set_fromLoad(bool value);

  /// @brief Method .ctor, addr 0x1554944, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PrivateRoomEntranceConsole____c__DisplayClass10_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PrivateRoomEntranceConsole____c__DisplayClass10_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PrivateRoomEntranceConsole____c__DisplayClass10_0(__PrivateRoomEntranceConsole____c__DisplayClass10_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PrivateRoomEntranceConsole____c__DisplayClass10_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PrivateRoomEntranceConsole____c__DisplayClass10_0(__PrivateRoomEntranceConsole____c__DisplayClass10_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PrivateRoomEntranceConsole> _____4__this;

  /// @brief Field curFetchPlayerApperanceAccountID, offset: 0x18, size: 0x8, def value: None
  ::StringW ___curFetchPlayerApperanceAccountID;

  /// @brief Field fromLoad, offset: 0x20, size: 0x1, def value: None
  bool ___fromLoad;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PrivateRoomEntranceConsole____c__DisplayClass10_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PrivateRoomEntranceConsole____c__DisplayClass10_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PrivateRoomEntranceConsole____c__DisplayClass10_0, ___curFetchPlayerApperanceAccountID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PrivateRoomEntranceConsole____c__DisplayClass10_0, ___fromLoad) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PrivateRoomEntranceConsole
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PrivateRoomEntranceConsole*
class CORDL_TYPE PrivateRoomEntranceConsole : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass10_0 = ::GlobalNamespace::__PrivateRoomEntranceConsole____c__DisplayClass10_0;

  /// @brief Field activeContainers, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_activeContainers,
                      put = __cordl_internal_set_activeContainers))::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> activeContainers;

  /// @brief Field destinationPrefixes, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_destinationPrefixes, put = __cordl_internal_set_destinationPrefixes))::ArrayW<::StringW, ::Array<::StringW>*> destinationPrefixes;

  /// @brief Field destinationSwitchParticles, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_destinationSwitchParticles, put = __cordl_internal_set_destinationSwitchParticles))::UnityW<::UnityEngine::ParticleSystem> destinationSwitchParticles;

  /// @brief Field destinationSwitchSoundKey, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_destinationSwitchSoundKey, put = __cordl_internal_set_destinationSwitchSoundKey))::StringW destinationSwitchSoundKey;

  /// @brief Field destinationTexts, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_destinationTexts,
                      put = __cordl_internal_set_destinationTexts))::ArrayW<::UnityW<::UnityEngine::UI::Text>, ::Array<::UnityW<::UnityEngine::UI::Text>>*> destinationTexts;

  /// @brief Field fetchPlayerApperanceAccountID, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_fetchPlayerApperanceAccountID, put = __cordl_internal_set_fetchPlayerApperanceAccountID))::StringW fetchPlayerApperanceAccountID;

  /// @brief Field travelToFriendDisplay, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_travelToFriendDisplay, put = __cordl_internal_set_travelToFriendDisplay))::UnityW<::GlobalNamespace::TravelToFriendDisplay> travelToFriendDisplay;

  static inline ::GlobalNamespace::PrivateRoomEntranceConsole* New_ctor();

  /// @brief Method SelectDestination, addr 0x15546f4, size 0x1dc, virtual false, abstract: false, final false
  inline void SelectDestination(::StringW accountID, bool fromLoad);

  /// @brief Method SelectNewDestination, addr 0x15548d0, size 0x74, virtual false, abstract: false, final false
  inline void SelectNewDestination(::StringW accountID);

  /// @brief Method SetActive, addr 0x1554550, size 0x1a4, virtual false, abstract: false, final false
  inline void SetActive(bool newActive);

  /// @brief Method Start, addr 0x1554488, size 0xc8, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_activeContainers() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get_activeContainers();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_destinationPrefixes() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_destinationPrefixes();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_destinationSwitchParticles() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_destinationSwitchParticles();

  constexpr ::StringW const& __cordl_internal_get_destinationSwitchSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_destinationSwitchSoundKey();

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Text>, ::Array<::UnityW<::UnityEngine::UI::Text>>*> const& __cordl_internal_get_destinationTexts() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Text>, ::Array<::UnityW<::UnityEngine::UI::Text>>*>& __cordl_internal_get_destinationTexts();

  constexpr ::StringW const& __cordl_internal_get_fetchPlayerApperanceAccountID() const;

  constexpr ::StringW& __cordl_internal_get_fetchPlayerApperanceAccountID();

  constexpr ::UnityW<::GlobalNamespace::TravelToFriendDisplay> const& __cordl_internal_get_travelToFriendDisplay() const;

  constexpr ::UnityW<::GlobalNamespace::TravelToFriendDisplay>& __cordl_internal_get_travelToFriendDisplay();

  constexpr void __cordl_internal_set_activeContainers(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  constexpr void __cordl_internal_set_destinationPrefixes(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_destinationSwitchParticles(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr void __cordl_internal_set_destinationSwitchSoundKey(::StringW value);

  constexpr void __cordl_internal_set_destinationTexts(::ArrayW<::UnityW<::UnityEngine::UI::Text>, ::Array<::UnityW<::UnityEngine::UI::Text>>*> value);

  constexpr void __cordl_internal_set_fetchPlayerApperanceAccountID(::StringW value);

  constexpr void __cordl_internal_set_travelToFriendDisplay(::UnityW<::GlobalNamespace::TravelToFriendDisplay> value);

  /// @brief Method .ctor, addr 0x155494c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrivateRoomEntranceConsole();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrivateRoomEntranceConsole", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrivateRoomEntranceConsole(PrivateRoomEntranceConsole&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrivateRoomEntranceConsole", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrivateRoomEntranceConsole(PrivateRoomEntranceConsole const&) = delete;

  /// @brief Field destinationTexts, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::UI::Text>, ::Array<::UnityW<::UnityEngine::UI::Text>>*> ___destinationTexts;

  /// @brief Field destinationSwitchParticles, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ___destinationSwitchParticles;

  /// @brief Field destinationSwitchSoundKey, offset: 0x28, size: 0x8, def value: None
  ::StringW ___destinationSwitchSoundKey;

  /// @brief Field destinationPrefixes, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___destinationPrefixes;

  /// @brief Field activeContainers, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ___activeContainers;

  /// @brief Field travelToFriendDisplay, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TravelToFriendDisplay> ___travelToFriendDisplay;

  /// @brief Field fetchPlayerApperanceAccountID, offset: 0x48, size: 0x8, def value: None
  ::StringW ___fetchPlayerApperanceAccountID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PrivateRoomEntranceConsole, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomEntranceConsole, ___destinationTexts) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomEntranceConsole, ___destinationSwitchParticles) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomEntranceConsole, ___destinationSwitchSoundKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomEntranceConsole, ___destinationPrefixes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomEntranceConsole, ___activeContainers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomEntranceConsole, ___travelToFriendDisplay) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomEntranceConsole, ___fetchPlayerApperanceAccountID) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PrivateRoomEntranceConsole);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PrivateRoomEntranceConsole*, "", "PrivateRoomEntranceConsole");
NEED_NO_BOX(::GlobalNamespace::__PrivateRoomEntranceConsole____c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PrivateRoomEntranceConsole____c__DisplayClass10_0*, "", "PrivateRoomEntranceConsole/<>c__DisplayClass10_0");
