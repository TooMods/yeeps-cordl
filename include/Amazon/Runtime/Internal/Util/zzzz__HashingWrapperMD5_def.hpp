#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Util/zzzz__HashingWrapper_def.hpp"
CORDL_MODULE_EXPORT(HashingWrapperMD5)
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class HashingWrapperMD5;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::HashingWrapperMD5);
// Type: Amazon.Runtime.Internal.Util::HashingWrapperMD5
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::HashingWrapperMD5*
class CORDL_TYPE HashingWrapperMD5 : public ::Amazon::Runtime::Internal::Util::HashingWrapper {
public:
  // Declarations
  static inline ::Amazon::Runtime::Internal::Util::HashingWrapperMD5* New_ctor();

  /// @brief Method .ctor, addr 0x2448a68, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HashingWrapperMD5();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HashingWrapperMD5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HashingWrapperMD5(HashingWrapperMD5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HashingWrapperMD5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HashingWrapperMD5(HashingWrapperMD5 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::HashingWrapperMD5, 0x18>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::HashingWrapperMD5);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::HashingWrapperMD5*, "Amazon.Runtime.Internal.Util", "HashingWrapperMD5");
