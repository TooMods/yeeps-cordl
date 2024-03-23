#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LicenseException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class LicenseException;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::LicenseException);
// Type: System.ComponentModel::LicenseException
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::LicenseException*
class CORDL_TYPE LicenseException : public ::System::SystemException {
public:
  // Declarations
  __declspec(property(get = get_LicensedType))::System::Type* LicensedType;

  /// @brief Field instance, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_instance, put = __cordl_internal_set_instance))::System::Object* instance;

  /// @brief Field type, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type))::System::Type* type;

  /// @brief Method GetObjectData, addr 0x1b16500, size 0xf4, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::ComponentModel::LicenseException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::ComponentModel::LicenseException* New_ctor(::System::Type* type);

  static inline ::System::ComponentModel::LicenseException* New_ctor(::System::Type* type, ::System::Object* instance);

  static inline ::System::ComponentModel::LicenseException* New_ctor(::System::Type* type, ::System::Object* instance, ::StringW message);

  static inline ::System::ComponentModel::LicenseException* New_ctor(::System::Type* type, ::System::Object* instance, ::StringW message, ::System::Exception* innerException);

  constexpr ::System::Object*& __cordl_internal_get_instance();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_instance() const;

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_type() const;

  constexpr void __cordl_internal_set_instance(::System::Object* value);

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method .ctor, addr 0x1b16378, size 0x180, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x1b160b8, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

  /// @brief Method .ctor, addr 0x1b161ec, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::System::Object* instance);

  /// @brief Method .ctor, addr 0x1b161b0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::System::Object* instance, ::StringW message);

  /// @brief Method .ctor, addr 0x1b16338, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::System::Object* instance, ::StringW message, ::System::Exception* innerException);

  /// @brief Method get_LicensedType, addr 0x1b164f8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_LicensedType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LicenseException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LicenseException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LicenseException(LicenseException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LicenseException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LicenseException(LicenseException const&) = delete;

  /// @brief Field type, offset: 0x90, size: 0x8, def value: None
  ::System::Type* ___type;

  /// @brief Field instance, offset: 0x98, size: 0x8, def value: None
  ::System::Object* ___instance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::LicenseException, 0xa0>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::LicenseException, ___type) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::LicenseException, ___instance) == 0x98, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::LicenseException);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::LicenseException*, "System.ComponentModel", "LicenseException");
