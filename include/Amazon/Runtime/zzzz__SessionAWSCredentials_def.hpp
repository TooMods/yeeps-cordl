#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AWSCredentials_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SessionAWSCredentials)
namespace Amazon::Runtime {
class ImmutableCredentials;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime {
class SessionAWSCredentials;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::SessionAWSCredentials);
// Type: Amazon.Runtime::SessionAWSCredentials
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::SessionAWSCredentials*
class CORDL_TYPE SessionAWSCredentials : public ::Amazon::Runtime::AWSCredentials {
public:
  // Declarations
  /// @brief Field _lastCredentials, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__lastCredentials, put = __cordl_internal_set__lastCredentials))::Amazon::Runtime::ImmutableCredentials* _lastCredentials;

  /// @brief Method Equals, addr 0x1ff1458, size 0x178, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetCredentials, addr 0x1ff1438, size 0x20, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::ImmutableCredentials* GetCredentials();

  /// @brief Method GetHashCode, addr 0x1ff15d0, size 0x98, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Amazon::Runtime::SessionAWSCredentials* New_ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::StringW token);

  constexpr ::Amazon::Runtime::ImmutableCredentials*& __cordl_internal_get__lastCredentials();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::ImmutableCredentials*> const& __cordl_internal_get__lastCredentials() const;

  constexpr void __cordl_internal_set__lastCredentials(::Amazon::Runtime::ImmutableCredentials* value);

  /// @brief Method .ctor, addr 0x1fdcb28, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::StringW token);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SessionAWSCredentials();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SessionAWSCredentials", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SessionAWSCredentials(SessionAWSCredentials&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SessionAWSCredentials", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SessionAWSCredentials(SessionAWSCredentials const&) = delete;

  /// @brief Field _lastCredentials, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::ImmutableCredentials* ____lastCredentials;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::SessionAWSCredentials, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::SessionAWSCredentials, ____lastCredentials) == 0x10, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::SessionAWSCredentials);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::SessionAWSCredentials*, "Amazon.Runtime", "SessionAWSCredentials");
