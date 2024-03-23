#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LambdaDatabaseUtility_def.hpp"
#include "GlobalNamespace/zzzz__SetPoolItemsUtility_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SetPoolItemsUtility)
namespace GlobalNamespace {
struct __SetPoolItemsUtility__PoolType;
}
namespace GlobalNamespace {
struct __SetPoolItemsUtility__Rarity;
}
namespace OVRSimpleJSON {
class JSONNode;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct __SetPoolItemsUtility__PoolType;
}
namespace GlobalNamespace {
struct __SetPoolItemsUtility__Rarity;
}
namespace GlobalNamespace {
class SetPoolItemsUtility;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__SetPoolItemsUtility__PoolType);
MARK_VAL_T(::GlobalNamespace::__SetPoolItemsUtility__Rarity);
MARK_REF_PTR_T(::GlobalNamespace::SetPoolItemsUtility);
// Type: ::Rarity
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SetPoolItemsUtility::Rarity
struct CORDL_TYPE __SetPoolItemsUtility__Rarity {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____SetPoolItemsUtility__Rarity_Unwrapped
  enum struct ____SetPoolItemsUtility__Rarity_Unwrapped : int32_t {
    __E_Common = static_cast<int32_t>(0x0),
    __E_Rare = static_cast<int32_t>(0x1),
    __E_Epic = static_cast<int32_t>(0x2),
    __E_Legendary = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____SetPoolItemsUtility__Rarity_Unwrapped() const noexcept {
    return static_cast<____SetPoolItemsUtility__Rarity_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SetPoolItemsUtility__Rarity();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __SetPoolItemsUtility__Rarity(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Common value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__SetPoolItemsUtility__Rarity const Common;

  /// @brief Field Epic value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__SetPoolItemsUtility__Rarity const Epic;

  /// @brief Field Legendary value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__SetPoolItemsUtility__Rarity const Legendary;

  /// @brief Field Rare value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__SetPoolItemsUtility__Rarity const Rare;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SetPoolItemsUtility__Rarity, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SetPoolItemsUtility__Rarity, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PoolType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SetPoolItemsUtility::PoolType
struct CORDL_TYPE __SetPoolItemsUtility__PoolType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____SetPoolItemsUtility__PoolType_Unwrapped
  enum struct ____SetPoolItemsUtility__PoolType_Unwrapped : int32_t {
    __E_Basics = static_cast<int32_t>(0x0),
    __E_Outfits = static_cast<int32_t>(0x1),
    __E_Heads = static_cast<int32_t>(0x2),
    __E_Hairs = static_cast<int32_t>(0x3),
    __E_Zippers = static_cast<int32_t>(0x4),
    __E_TechWeb = static_cast<int32_t>(0x5),
    __E_PrivateRoomThemes = static_cast<int32_t>(0x6),
    __E_EasyChallenges = static_cast<int32_t>(0x7),
    __E_HardChallenges = static_cast<int32_t>(0x8),
    __E_OutfitsSnow = static_cast<int32_t>(0x9),
    __E_HeadsSnow = static_cast<int32_t>(0xa),
    __E_HairsSnow = static_cast<int32_t>(0xb),
    __E_ZippersSnow = static_cast<int32_t>(0xc),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____SetPoolItemsUtility__PoolType_Unwrapped() const noexcept {
    return static_cast<____SetPoolItemsUtility__PoolType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SetPoolItemsUtility__PoolType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __SetPoolItemsUtility__PoolType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Basics value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__SetPoolItemsUtility__PoolType const Basics;

  /// @brief Field EasyChallenges value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::__SetPoolItemsUtility__PoolType const EasyChallenges;

  /// @brief Field Hairs value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__SetPoolItemsUtility__PoolType const Hairs;

  /// @brief Field HairsSnow value: static_cast<int32_t>(0xb)
  static ::GlobalNamespace::__SetPoolItemsUtility__PoolType const HairsSnow;

  /// @brief Field HardChallenges value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__SetPoolItemsUtility__PoolType const HardChallenges;

  /// @brief Field Heads value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__SetPoolItemsUtility__PoolType const Heads;

  /// @brief Field HeadsSnow value: static_cast<int32_t>(0xa)
  static ::GlobalNamespace::__SetPoolItemsUtility__PoolType const HeadsSnow;

  /// @brief Field Outfits value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__SetPoolItemsUtility__PoolType const Outfits;

  /// @brief Field OutfitsSnow value: static_cast<int32_t>(0x9)
  static ::GlobalNamespace::__SetPoolItemsUtility__PoolType const OutfitsSnow;

  /// @brief Field PrivateRoomThemes value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__SetPoolItemsUtility__PoolType const PrivateRoomThemes;

  /// @brief Field TechWeb value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__SetPoolItemsUtility__PoolType const TechWeb;

  /// @brief Field Zippers value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__SetPoolItemsUtility__PoolType const Zippers;

  /// @brief Field ZippersSnow value: static_cast<int32_t>(0xc)
  static ::GlobalNamespace::__SetPoolItemsUtility__PoolType const ZippersSnow;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SetPoolItemsUtility__PoolType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SetPoolItemsUtility__PoolType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SetPoolItemsUtility
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SetPoolItemsUtility*
class CORDL_TYPE SetPoolItemsUtility : public ::GlobalNamespace::LambdaDatabaseUtility {
public:
  // Declarations
  using PoolType = ::GlobalNamespace::__SetPoolItemsUtility__PoolType;

  using Rarity = ::GlobalNamespace::__SetPoolItemsUtility__Rarity;

  /// @brief Field overrideExistingPrices, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_overrideExistingPrices, put = __cordl_internal_set_overrideExistingPrices)) bool overrideExistingPrices;

  /// @brief Field poolType, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_poolType, put = __cordl_internal_set_poolType))::GlobalNamespace::__SetPoolItemsUtility__PoolType poolType;

  /// @brief Field resetEntireList, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get_resetEntireList, put = __cordl_internal_set_resetEntireList)) bool resetEntireList;

  /// @brief Field techWebPrefabs, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_techWebPrefabs,
                      put = __cordl_internal_set_techWebPrefabs))::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> techWebPrefabs;

  /// @brief Method ConstructInputJSONForCosmetics, addr 0x2771ef4, size 0x1c8, virtual false, abstract: false, final false
  static inline void ConstructInputJSONForCosmetics(
      ::OVRSimpleJSON::JSONNode* inputJSON,
      ::ArrayW<::System::ValueTuple_2<::StringW, ::GlobalNamespace::__SetPoolItemsUtility__Rarity>, ::Array<::System::ValueTuple_2<::StringW, ::GlobalNamespace::__SetPoolItemsUtility__Rarity>>*>
          cosmetics);

  /// @brief Method GetFunctionEndpoint, addr 0x276d938, size 0x40, virtual true, abstract: false, final false
  inline ::StringW GetFunctionEndpoint();

  /// @brief Method GetInputJSON, addr 0x276d978, size 0x25c, virtual true, abstract: false, final false
  inline ::OVRSimpleJSON::JSONNode* GetInputJSON(::StringW password);

  static inline ::GlobalNamespace::SetPoolItemsUtility* New_ctor();

  /// @brief Method SetupForBasics, addr 0x276dbd4, size 0x4c8, virtual false, abstract: false, final false
  inline void SetupForBasics(::OVRSimpleJSON::JSONNode* inputJSON);

  /// @brief Method SetupForEasyChallenges, addr 0x27706a0, size 0x648, virtual false, abstract: false, final false
  inline void SetupForEasyChallenges(::OVRSimpleJSON::JSONNode* inputJSON);

  /// @brief Method SetupForHairs, addr 0x276ef64, size 0x588, virtual false, abstract: false, final false
  inline void SetupForHairs(::OVRSimpleJSON::JSONNode* inputJSON);

  /// @brief Method SetupForHairsSnow, addr 0x2771a30, size 0x1c8, virtual false, abstract: false, final false
  inline void SetupForHairsSnow(::OVRSimpleJSON::JSONNode* inputJSON);

  /// @brief Method SetupForHardChallenges, addr 0x2770ce8, size 0x688, virtual false, abstract: false, final false
  inline void SetupForHardChallenges(::OVRSimpleJSON::JSONNode* inputJSON);

  /// @brief Method SetupForHeads, addr 0x276e660, size 0x904, virtual false, abstract: false, final false
  inline void SetupForHeads(::OVRSimpleJSON::JSONNode* inputJSON);

  /// @brief Method SetupForHeadsSnow, addr 0x27715ec, size 0x444, virtual false, abstract: false, final false
  inline void SetupForHeadsSnow(::OVRSimpleJSON::JSONNode* inputJSON);

  /// @brief Method SetupForOutfits, addr 0x276e09c, size 0x5c4, virtual false, abstract: false, final false
  inline void SetupForOutfits(::OVRSimpleJSON::JSONNode* inputJSON);

  /// @brief Method SetupForOutfitsSnow, addr 0x2771370, size 0x27c, virtual false, abstract: false, final false
  inline void SetupForOutfitsSnow(::OVRSimpleJSON::JSONNode* inputJSON);

  /// @brief Method SetupForPrivateRoomThemes, addr 0x2770418, size 0x288, virtual false, abstract: false, final false
  inline void SetupForPrivateRoomThemes(::OVRSimpleJSON::JSONNode* inputJSON);

  /// @brief Method SetupForTechWeb, addr 0x276fd30, size 0x6e8, virtual false, abstract: false, final false
  inline void SetupForTechWeb(::OVRSimpleJSON::JSONNode* inputJSON);

  /// @brief Method SetupForZippers, addr 0x276f4ec, size 0x844, virtual false, abstract: false, final false
  inline void SetupForZippers(::OVRSimpleJSON::JSONNode* inputJSON);

  /// @brief Method SetupForZippersSnow, addr 0x2771bf8, size 0x2fc, virtual false, abstract: false, final false
  inline void SetupForZippersSnow(::OVRSimpleJSON::JSONNode* inputJSON);

  constexpr bool const& __cordl_internal_get_overrideExistingPrices() const;

  constexpr bool& __cordl_internal_get_overrideExistingPrices();

  constexpr ::GlobalNamespace::__SetPoolItemsUtility__PoolType const& __cordl_internal_get_poolType() const;

  constexpr ::GlobalNamespace::__SetPoolItemsUtility__PoolType& __cordl_internal_get_poolType();

  constexpr bool const& __cordl_internal_get_resetEntireList() const;

  constexpr bool& __cordl_internal_get_resetEntireList();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_techWebPrefabs() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get_techWebPrefabs();

  constexpr void __cordl_internal_set_overrideExistingPrices(bool value);

  constexpr void __cordl_internal_set_poolType(::GlobalNamespace::__SetPoolItemsUtility__PoolType value);

  constexpr void __cordl_internal_set_resetEntireList(bool value);

  constexpr void __cordl_internal_set_techWebPrefabs(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  /// @brief Method .ctor, addr 0x27720bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetPoolItemsUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetPoolItemsUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetPoolItemsUtility(SetPoolItemsUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetPoolItemsUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetPoolItemsUtility(SetPoolItemsUtility const&) = delete;

  /// @brief Field poolType, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__SetPoolItemsUtility__PoolType ___poolType;

  /// @brief Field overrideExistingPrices, offset: 0x24, size: 0x1, def value: None
  bool ___overrideExistingPrices;

  /// @brief Field resetEntireList, offset: 0x25, size: 0x1, def value: None
  bool ___resetEntireList;

  /// @brief Field techWebPrefabs, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ___techWebPrefabs;

  /// @brief Field CURRENCYVALUEINDEXES_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString CURRENCYVALUEINDEXES_KEY{ u"currencyValueIndexes" };

  /// @brief Field ITEMKEYS_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ITEMKEYS_KEY{ u"itemKeys" };

  /// @brief Field POOLKEY_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString POOLKEY_KEY{ u"poolKey" };

  /// @brief Field techWebDivisionCount offset 0xffffffff size 0x4
  static constexpr int32_t techWebDivisionCount{ static_cast<int32_t>(0x5) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SetPoolItemsUtility, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SetPoolItemsUtility, ___poolType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetPoolItemsUtility, ___overrideExistingPrices) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetPoolItemsUtility, ___resetEntireList) == 0x25, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetPoolItemsUtility, ___techWebPrefabs) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SetPoolItemsUtility__PoolType, "", "SetPoolItemsUtility/PoolType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SetPoolItemsUtility__Rarity, "", "SetPoolItemsUtility/Rarity");
NEED_NO_BOX(::GlobalNamespace::SetPoolItemsUtility);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SetPoolItemsUtility*, "", "SetPoolItemsUtility");
