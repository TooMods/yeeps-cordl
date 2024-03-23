#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ICache)
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class ICache;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::ICache);
// Type: Amazon.Runtime.Internal.Util::ICache
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::ICache*
class CORDL_TYPE ICache {
public:
  // Declarations
  __declspec(property(get = get_CacheClearPeriod, put = set_CacheClearPeriod))::System::TimeSpan CacheClearPeriod;

  __declspec(property(get = get_ItemCount)) int32_t ItemCount;

  __declspec(property(get = get_MaximumItemLifespan, put = set_MaximumItemLifespan))::System::TimeSpan MaximumItemLifespan;

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Clear();

  /// @brief Method get_CacheClearPeriod, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::TimeSpan get_CacheClearPeriod();

  /// @brief Method get_ItemCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_ItemCount();

  /// @brief Method get_MaximumItemLifespan, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::TimeSpan get_MaximumItemLifespan();

  /// @brief Method set_CacheClearPeriod, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_CacheClearPeriod(::System::TimeSpan value);

  /// @brief Method set_MaximumItemLifespan, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_MaximumItemLifespan(::System::TimeSpan value);

  // Ctor Parameters [CppParam { name: "", ty: "ICache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICache(ICache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICache(ICache const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::ICache);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::ICache*, "Amazon.Runtime.Internal.Util", "ICache");
