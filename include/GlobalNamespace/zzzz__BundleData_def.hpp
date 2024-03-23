#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BundleData)
namespace System {
struct DateTime;
}
// Forward declare root types
namespace GlobalNamespace {
class BundleData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BundleData);
// Type: ::BundleData
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BundleData*
class CORDL_TYPE BundleData : public ::System::Object {
public:
  // Declarations
  /// @brief Field bundleKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_bundleKey, put = __cordl_internal_set_bundleKey))::StringW bundleKey;

  /// @brief Field centCost, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_centCost, put = __cordl_internal_set_centCost)) int32_t centCost;

  /// @brief Field currencyAmount, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_currencyAmount, put = __cordl_internal_set_currencyAmount)) int32_t currencyAmount;

  /// @brief Field displayName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_displayName, put = __cordl_internal_set_displayName))::StringW displayName;

  /// @brief Field expireTimestamp, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_expireTimestamp, put = __cordl_internal_set_expireTimestamp))::System::DateTime expireTimestamp;

  /// @brief Field items, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_items, put = __cordl_internal_set_items))::ArrayW<::StringW, ::Array<::StringW>*> items;

  /// @brief Field startTimestamp, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_startTimestamp, put = __cordl_internal_set_startTimestamp))::System::DateTime startTimestamp;

  /// @brief Method GetDollarCostString, addr 0x1595a4c, size 0x98, virtual false, abstract: false, final false
  inline ::StringW GetDollarCostString();

  static inline ::GlobalNamespace::BundleData* New_ctor(::StringW bundleKey, ::StringW displayName, ::System::DateTime startTimestamp, ::System::DateTime expireTimestamp,
                                                        ::ArrayW<::StringW, ::Array<::StringW>*> items, int32_t currencyAmount, int32_t centCost);

  constexpr ::StringW const& __cordl_internal_get_bundleKey() const;

  constexpr ::StringW& __cordl_internal_get_bundleKey();

  constexpr int32_t const& __cordl_internal_get_centCost() const;

  constexpr int32_t& __cordl_internal_get_centCost();

  constexpr int32_t const& __cordl_internal_get_currencyAmount() const;

  constexpr int32_t& __cordl_internal_get_currencyAmount();

  constexpr ::StringW const& __cordl_internal_get_displayName() const;

  constexpr ::StringW& __cordl_internal_get_displayName();

  constexpr ::System::DateTime const& __cordl_internal_get_expireTimestamp() const;

  constexpr ::System::DateTime& __cordl_internal_get_expireTimestamp();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_items() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_items();

  constexpr ::System::DateTime const& __cordl_internal_get_startTimestamp() const;

  constexpr ::System::DateTime& __cordl_internal_get_startTimestamp();

  constexpr void __cordl_internal_set_bundleKey(::StringW value);

  constexpr void __cordl_internal_set_centCost(int32_t value);

  constexpr void __cordl_internal_set_currencyAmount(int32_t value);

  constexpr void __cordl_internal_set_displayName(::StringW value);

  constexpr void __cordl_internal_set_expireTimestamp(::System::DateTime value);

  constexpr void __cordl_internal_set_items(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_startTimestamp(::System::DateTime value);

  /// @brief Method .ctor, addr 0x15959e8, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::StringW bundleKey, ::StringW displayName, ::System::DateTime startTimestamp, ::System::DateTime expireTimestamp, ::ArrayW<::StringW, ::Array<::StringW>*> items,
                    int32_t currencyAmount, int32_t centCost);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BundleData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BundleData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BundleData(BundleData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BundleData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BundleData(BundleData const&) = delete;

  /// @brief Field bundleKey, offset: 0x10, size: 0x8, def value: None
  ::StringW ___bundleKey;

  /// @brief Field displayName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___displayName;

  /// @brief Field startTimestamp, offset: 0x20, size: 0x8, def value: None
  ::System::DateTime ___startTimestamp;

  /// @brief Field expireTimestamp, offset: 0x28, size: 0x8, def value: None
  ::System::DateTime ___expireTimestamp;

  /// @brief Field items, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___items;

  /// @brief Field currencyAmount, offset: 0x38, size: 0x4, def value: None
  int32_t ___currencyAmount;

  /// @brief Field centCost, offset: 0x3c, size: 0x4, def value: None
  int32_t ___centCost;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BundleData, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BundleData, ___bundleKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BundleData, ___displayName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BundleData, ___startTimestamp) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BundleData, ___expireTimestamp) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BundleData, ___items) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BundleData, ___currencyAmount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BundleData, ___centCost) == 0x3c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BundleData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BundleData*, "", "BundleData");
