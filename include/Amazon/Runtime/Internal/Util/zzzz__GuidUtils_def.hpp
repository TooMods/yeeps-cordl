#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GuidUtils)
namespace System {
struct Guid;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class GuidUtils;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::GuidUtils);
// Type: Amazon.Runtime.Internal.Util::GuidUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::GuidUtils*
class CORDL_TYPE GuidUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method TryParseGuid, addr 0x24388a8, size 0xcc, virtual false, abstract: false, final false
  static inline bool TryParseGuid(::StringW value, ByRef<::System::Guid> result);

  /// @brief Method TryParseNullableGuid, addr 0x243880c, size 0x9c, virtual false, abstract: false, final false
  static inline bool TryParseNullableGuid(::StringW value, ByRef<::System::Nullable_1<::System::Guid>> result);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GuidUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GuidUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GuidUtils(GuidUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GuidUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GuidUtils(GuidUtils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::GuidUtils, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::GuidUtils);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::GuidUtils*, "Amazon.Runtime.Internal.Util", "GuidUtils");
