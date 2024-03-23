#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticsShopConsoleGroup)
namespace GlobalNamespace {
class CosmeticsShopConsole;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticsShopConsoleGroup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CosmeticsShopConsoleGroup);
// Type: ::CosmeticsShopConsoleGroup
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CosmeticsShopConsoleGroup*
class CORDL_TYPE CosmeticsShopConsoleGroup : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field consoles, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_consoles,
                      put = __cordl_internal_set_consoles))::ArrayW<::UnityW<::GlobalNamespace::CosmeticsShopConsole>, ::Array<::UnityW<::GlobalNamespace::CosmeticsShopConsole>>*> consoles;

  /// @brief Field groupKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_groupKey, put = __cordl_internal_set_groupKey))::StringW groupKey;

  /// @brief Field groups, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_groups, put = setStaticF_groups))::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::CosmeticsShopConsoleGroup>>* groups;

  static inline ::GlobalNamespace::CosmeticsShopConsoleGroup* New_ctor();

  /// @brief Method OnReceivePreviewBundle, addr 0x1546894, size 0x10c, virtual false, abstract: false, final false
  inline void OnReceivePreviewBundle(int32_t indexInGroup, int32_t bundleIndex);

  /// @brief Method SendPreviewItem, addr 0x1546794, size 0x100, virtual false, abstract: false, final false
  inline void SendPreviewItem(int32_t indexInGroup, int32_t bundleIndex);

  /// @brief Method Start, addr 0x15465c8, size 0x1cc, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TryGetGroup, addr 0x15464ec, size 0xdc, virtual false, abstract: false, final false
  static inline bool TryGetGroup(::StringW groupKey, ByRef<::GlobalNamespace::CosmeticsShopConsoleGroup*> group);

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::CosmeticsShopConsole>, ::Array<::UnityW<::GlobalNamespace::CosmeticsShopConsole>>*> const& __cordl_internal_get_consoles() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::CosmeticsShopConsole>, ::Array<::UnityW<::GlobalNamespace::CosmeticsShopConsole>>*>& __cordl_internal_get_consoles();

  constexpr ::StringW const& __cordl_internal_get_groupKey() const;

  constexpr ::StringW& __cordl_internal_get_groupKey();

  constexpr void __cordl_internal_set_consoles(::ArrayW<::UnityW<::GlobalNamespace::CosmeticsShopConsole>, ::Array<::UnityW<::GlobalNamespace::CosmeticsShopConsole>>*> value);

  constexpr void __cordl_internal_set_groupKey(::StringW value);

  /// @brief Method .ctor, addr 0x15469a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::CosmeticsShopConsoleGroup>>* getStaticF_groups();

  static inline void setStaticF_groups(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::CosmeticsShopConsoleGroup>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CosmeticsShopConsoleGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CosmeticsShopConsoleGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CosmeticsShopConsoleGroup(CosmeticsShopConsoleGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CosmeticsShopConsoleGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CosmeticsShopConsoleGroup(CosmeticsShopConsoleGroup const&) = delete;

  /// @brief Field groupKey, offset: 0x18, size: 0x8, def value: None
  ::StringW ___groupKey;

  /// @brief Field consoles, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::CosmeticsShopConsole>, ::Array<::UnityW<::GlobalNamespace::CosmeticsShopConsole>>*> ___consoles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CosmeticsShopConsoleGroup, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsShopConsoleGroup, ___groupKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsShopConsoleGroup, ___consoles) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CosmeticsShopConsoleGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CosmeticsShopConsoleGroup*, "", "CosmeticsShopConsoleGroup");
