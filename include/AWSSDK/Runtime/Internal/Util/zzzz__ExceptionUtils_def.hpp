#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(ExceptionUtils)
namespace System::Net {
struct HttpStatusCode;
}
namespace System {
class Exception;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace AWSSDK::Runtime::Internal::Util {
class ExceptionUtils;
}
// Write type traits
MARK_REF_PTR_T(::AWSSDK::Runtime::Internal::Util::ExceptionUtils);
// Type: AWSSDK.Runtime.Internal.Util::ExceptionUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace AWSSDK::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::AWSSDK.Runtime.Internal.Util::ExceptionUtils*
class CORDL_TYPE ExceptionUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method DetermineHttpStatusCode, addr 0x21f0d44, size 0x320, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::System::Net::HttpStatusCode> DetermineHttpStatusCode(::System::Exception* e);

  /// @brief Method IsInnerException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool IsInnerException(::System::Exception* exception);

  /// @brief Method IsInnerException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool IsInnerException(::System::Exception* exception, ByRef<T> inner);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExceptionUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExceptionUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExceptionUtils(ExceptionUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExceptionUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExceptionUtils(ExceptionUtils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::AWSSDK::Runtime::Internal::Util::ExceptionUtils, 0x10>, "Size mismatch!");

} // namespace AWSSDK::Runtime::Internal::Util
NEED_NO_BOX(::AWSSDK::Runtime::Internal::Util::ExceptionUtils);
DEFINE_IL2CPP_ARG_TYPE(::AWSSDK::Runtime::Internal::Util::ExceptionUtils*, "AWSSDK.Runtime.Internal.Util", "ExceptionUtils");
