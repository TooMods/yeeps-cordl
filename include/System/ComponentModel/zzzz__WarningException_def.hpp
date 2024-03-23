#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(WarningException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::ComponentModel {
class WarningException;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::WarningException);
// Type: System.ComponentModel::WarningException
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::WarningException*
class CORDL_TYPE WarningException : public ::System::SystemException {
public:
  // Declarations
  __declspec(property(get = get_HelpTopic))::StringW HelpTopic;

  __declspec(property(get = get_HelpUrl))::StringW HelpUrl;

  /// @brief Field <HelpTopic>k__BackingField, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__HelpTopic_k__BackingField, put = __cordl_internal_set__HelpTopic_k__BackingField))::StringW _HelpTopic_k__BackingField;

  /// @brief Field <HelpUrl>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__HelpUrl_k__BackingField, put = __cordl_internal_set__HelpUrl_k__BackingField))::StringW _HelpUrl_k__BackingField;

  /// @brief Method GetObjectData, addr 0x1b0f630, size 0xac, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::ComponentModel::WarningException* New_ctor();

  static inline ::System::ComponentModel::WarningException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::ComponentModel::WarningException* New_ctor(::StringW message);

  static inline ::System::ComponentModel::WarningException* New_ctor(::StringW message, ::StringW helpUrl);

  static inline ::System::ComponentModel::WarningException* New_ctor(::StringW message, ::StringW helpUrl, ::StringW helpTopic);

  static inline ::System::ComponentModel::WarningException* New_ctor(::StringW message, ::System::Exception* innerException);

  constexpr ::StringW const& __cordl_internal_get__HelpTopic_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__HelpTopic_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__HelpUrl_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__HelpUrl_k__BackingField();

  constexpr void __cordl_internal_set__HelpTopic_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__HelpUrl_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x1b0f410, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1b0f4a8, size 0x178, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x1b0f45c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x1b0f478, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::StringW helpUrl);

  /// @brief Method .ctor, addr 0x1b0f430, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::StringW helpUrl, ::StringW helpTopic);

  /// @brief Method .ctor, addr 0x1b0f4a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method get_HelpTopic, addr 0x1b0f628, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_HelpTopic();

  /// @brief Method get_HelpUrl, addr 0x1b0f620, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_HelpUrl();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WarningException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WarningException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WarningException(WarningException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WarningException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WarningException(WarningException const&) = delete;

  /// @brief Field <HelpUrl>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::StringW ____HelpUrl_k__BackingField;

  /// @brief Field <HelpTopic>k__BackingField, offset: 0x98, size: 0x8, def value: None
  ::StringW ____HelpTopic_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::WarningException, 0xa0>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::WarningException, ____HelpUrl_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::WarningException, ____HelpTopic_k__BackingField) == 0x98, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::WarningException);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::WarningException*, "System.ComponentModel", "WarningException");
