#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ImmutableCredentials_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SAMLImmutableCredentials)
namespace Amazon::Runtime {
class ImmutableCredentials;
}
namespace System {
struct DateTime;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime {
class SAMLImmutableCredentials;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::SAMLImmutableCredentials);
// Type: Amazon.Runtime::SAMLImmutableCredentials
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::SAMLImmutableCredentials*
class CORDL_TYPE SAMLImmutableCredentials : public ::Amazon::Runtime::ImmutableCredentials {
public:
  // Declarations
  __declspec(property(get = get_Expires, put = set_Expires))::System::DateTime Expires;

  __declspec(property(get = get_Subject, put = set_Subject))::StringW Subject;

  /// @brief Field <Expires>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Expires_k__BackingField, put = __cordl_internal_set__Expires_k__BackingField))::System::DateTime _Expires_k__BackingField;

  /// @brief Field <Subject>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Subject_k__BackingField, put = __cordl_internal_set__Subject_k__BackingField))::StringW _Subject_k__BackingField;

  /// @brief Method Copy, addr 0x1ff0c90, size 0x88, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::ImmutableCredentials* Copy();

  /// @brief Method Equals, addr 0x1ff0b90, size 0x100, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method FromJson, addr 0x1ff0f1c, size 0x51c, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::SAMLImmutableCredentials* FromJson(::StringW json);

  /// @brief Method GetHashCode, addr 0x1ff0a14, size 0x17c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Amazon::Runtime::SAMLImmutableCredentials* New_ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::StringW token, ::System::DateTime expires, ::StringW subject);

  static inline ::Amazon::Runtime::SAMLImmutableCredentials* New_ctor(::Amazon::Runtime::ImmutableCredentials* credentials, ::System::DateTime expires, ::StringW subject);

  /// @brief Method ToJson, addr 0x1ff0d18, size 0x204, virtual false, abstract: false, final false
  inline ::StringW ToJson();

  constexpr ::System::DateTime const& __cordl_internal_get__Expires_k__BackingField() const;

  constexpr ::System::DateTime& __cordl_internal_get__Expires_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Subject_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Subject_k__BackingField();

  constexpr void __cordl_internal_set__Expires_k__BackingField(::System::DateTime value);

  constexpr void __cordl_internal_set__Subject_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x1ff09b0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::StringW token, ::System::DateTime expires, ::StringW subject);

  /// @brief Method .ctor, addr 0x1ff09d8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::ImmutableCredentials* credentials, ::System::DateTime expires, ::StringW subject);

  /// @brief Method get_Expires, addr 0x1ff0990, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_Expires();

  /// @brief Method get_Subject, addr 0x1ff09a0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Subject();

  /// @brief Method set_Expires, addr 0x1ff0998, size 0x8, virtual false, abstract: false, final false
  inline void set_Expires(::System::DateTime value);

  /// @brief Method set_Subject, addr 0x1ff09a8, size 0x8, virtual false, abstract: false, final false
  inline void set_Subject(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SAMLImmutableCredentials();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SAMLImmutableCredentials", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SAMLImmutableCredentials(SAMLImmutableCredentials&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SAMLImmutableCredentials", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SAMLImmutableCredentials(SAMLImmutableCredentials const&) = delete;

  /// @brief Field <Expires>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::DateTime ____Expires_k__BackingField;

  /// @brief Field <Subject>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____Subject_k__BackingField;

  /// @brief Field AccessKeyProperty offset 0xffffffff size 0x8
  static constexpr ::ConstString AccessKeyProperty{ u"AccessKey" };

  /// @brief Field ExpiresProperty offset 0xffffffff size 0x8
  static constexpr ::ConstString ExpiresProperty{ u"Expires" };

  /// @brief Field SecretKeyProperty offset 0xffffffff size 0x8
  static constexpr ::ConstString SecretKeyProperty{ u"SecretKey" };

  /// @brief Field SubjectProperty offset 0xffffffff size 0x8
  static constexpr ::ConstString SubjectProperty{ u"Subject" };

  /// @brief Field TokenProperty offset 0xffffffff size 0x8
  static constexpr ::ConstString TokenProperty{ u"Token" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::SAMLImmutableCredentials, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::SAMLImmutableCredentials, ____Expires_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::SAMLImmutableCredentials, ____Subject_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::SAMLImmutableCredentials);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::SAMLImmutableCredentials*, "Amazon.Runtime", "SAMLImmutableCredentials");
