#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AWSCredentials_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BasicAWSCredentials)
namespace Amazon::Runtime {
class ImmutableCredentials;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime {
class BasicAWSCredentials;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::BasicAWSCredentials);
// Type: Amazon.Runtime::BasicAWSCredentials
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::BasicAWSCredentials*
class CORDL_TYPE BasicAWSCredentials : public ::Amazon::Runtime::AWSCredentials {
public:
  // Declarations
  /// @brief Field _credentials, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__credentials, put = __cordl_internal_set__credentials))::Amazon::Runtime::ImmutableCredentials* _credentials;

  /// @brief Method Equals, addr 0x1fe7a74, size 0x178, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetCredentials, addr 0x1fe7a5c, size 0x18, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::ImmutableCredentials* GetCredentials();

  /// @brief Method GetHashCode, addr 0x1fe7bec, size 0x98, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Amazon::Runtime::BasicAWSCredentials* New_ctor(::StringW accessKey, ::StringW secretKey);

  constexpr ::Amazon::Runtime::ImmutableCredentials*& __cordl_internal_get__credentials();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::ImmutableCredentials*> const& __cordl_internal_get__credentials() const;

  constexpr void __cordl_internal_set__credentials(::Amazon::Runtime::ImmutableCredentials* value);

  /// @brief Method .ctor, addr 0x1fdccfc, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::StringW accessKey, ::StringW secretKey);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicAWSCredentials();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BasicAWSCredentials", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicAWSCredentials(BasicAWSCredentials&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicAWSCredentials", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicAWSCredentials(BasicAWSCredentials const&) = delete;

  /// @brief Field _credentials, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::ImmutableCredentials* ____credentials;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::BasicAWSCredentials, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::BasicAWSCredentials, ____credentials) == 0x10, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::BasicAWSCredentials);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::BasicAWSCredentials*, "Amazon.Runtime", "BasicAWSCredentials");
