#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpRequestCacheLevel)
// Forward declare root types
namespace System::Net::Cache {
struct HttpRequestCacheLevel;
}
// Write type traits
MARK_VAL_T(::System::Net::Cache::HttpRequestCacheLevel);
// Type: System.Net.Cache::HttpRequestCacheLevel
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net::Cache {
// Is value type: true
// CS Name: ::System.Net.Cache::HttpRequestCacheLevel
struct CORDL_TYPE HttpRequestCacheLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HttpRequestCacheLevel_Unwrapped
  enum struct __HttpRequestCacheLevel_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_BypassCache = static_cast<int32_t>(0x1),
    __E_CacheOnly = static_cast<int32_t>(0x2),
    __E_CacheIfAvailable = static_cast<int32_t>(0x3),
    __E_Revalidate = static_cast<int32_t>(0x4),
    __E_Reload = static_cast<int32_t>(0x5),
    __E_NoCacheNoStore = static_cast<int32_t>(0x6),
    __E_CacheOrNextCacheOnly = static_cast<int32_t>(0x7),
    __E_Refresh = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HttpRequestCacheLevel_Unwrapped() const noexcept {
    return static_cast<__HttpRequestCacheLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpRequestCacheLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HttpRequestCacheLevel(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BypassCache value: static_cast<int32_t>(0x1)
  static ::System::Net::Cache::HttpRequestCacheLevel const BypassCache;

  /// @brief Field CacheIfAvailable value: static_cast<int32_t>(0x3)
  static ::System::Net::Cache::HttpRequestCacheLevel const CacheIfAvailable;

  /// @brief Field CacheOnly value: static_cast<int32_t>(0x2)
  static ::System::Net::Cache::HttpRequestCacheLevel const CacheOnly;

  /// @brief Field CacheOrNextCacheOnly value: static_cast<int32_t>(0x7)
  static ::System::Net::Cache::HttpRequestCacheLevel const CacheOrNextCacheOnly;

  /// @brief Field Default value: static_cast<int32_t>(0x0)
  static ::System::Net::Cache::HttpRequestCacheLevel const Default;

  /// @brief Field NoCacheNoStore value: static_cast<int32_t>(0x6)
  static ::System::Net::Cache::HttpRequestCacheLevel const NoCacheNoStore;

  /// @brief Field Refresh value: static_cast<int32_t>(0x8)
  static ::System::Net::Cache::HttpRequestCacheLevel const Refresh;

  /// @brief Field Reload value: static_cast<int32_t>(0x5)
  static ::System::Net::Cache::HttpRequestCacheLevel const Reload;

  /// @brief Field Revalidate value: static_cast<int32_t>(0x4)
  static ::System::Net::Cache::HttpRequestCacheLevel const Revalidate;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Cache::HttpRequestCacheLevel, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::Cache::HttpRequestCacheLevel, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net::Cache
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Cache::HttpRequestCacheLevel, "System.Net.Cache", "HttpRequestCacheLevel");
