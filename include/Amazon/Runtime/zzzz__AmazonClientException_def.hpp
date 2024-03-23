#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AmazonClientException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Amazon::Runtime {
class AmazonClientException;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::AmazonClientException);
// Type: Amazon.Runtime::AmazonClientException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::AmazonClientException*
class CORDL_TYPE AmazonClientException : public ::System::Exception {
public:
  // Declarations
  static inline ::Amazon::Runtime::AmazonClientException* New_ctor(::StringW message);

  static inline ::Amazon::Runtime::AmazonClientException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x1fd88b8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x1fdafb8, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AmazonClientException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AmazonClientException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AmazonClientException(AmazonClientException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AmazonClientException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AmazonClientException(AmazonClientException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::AmazonClientException, 0x90>, "Size mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::AmazonClientException);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::AmazonClientException*, "Amazon.Runtime", "AmazonClientException");
