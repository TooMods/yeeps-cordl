#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SourceAccessConfiguration)
namespace Amazon::Lambda {
class SourceAccessType;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class SourceAccessConfiguration;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::SourceAccessConfiguration);
// Type: Amazon.Lambda.Model::SourceAccessConfiguration
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::SourceAccessConfiguration*
class CORDL_TYPE SourceAccessConfiguration : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Type, put = set_Type))::Amazon::Lambda::SourceAccessType* Type;

  __declspec(property(get = get_URI, put = set_URI))::StringW URI;

  /// @brief Field _type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type))::Amazon::Lambda::SourceAccessType* _type;

  /// @brief Field _uri, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__uri, put = __cordl_internal_set__uri))::StringW _uri;

  /// @brief Method IsSetType, addr 0x31091c4, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetType();

  /// @brief Method IsSetURI, addr 0x3109234, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetURI();

  static inline ::Amazon::Lambda::Model::SourceAccessConfiguration* New_ctor();

  constexpr ::Amazon::Lambda::SourceAccessType*& __cordl_internal_get__type();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::SourceAccessType*> const& __cordl_internal_get__type() const;

  constexpr ::StringW const& __cordl_internal_get__uri() const;

  constexpr ::StringW& __cordl_internal_get__uri();

  constexpr void __cordl_internal_set__type(::Amazon::Lambda::SourceAccessType* value);

  constexpr void __cordl_internal_set__uri(::StringW value);

  /// @brief Method .ctor, addr 0x3109244, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Type, addr 0x31091b4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::SourceAccessType* get_Type();

  /// @brief Method get_URI, addr 0x3109224, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_URI();

  /// @brief Method set_Type, addr 0x31091bc, size 0x8, virtual false, abstract: false, final false
  inline void set_Type(::Amazon::Lambda::SourceAccessType* value);

  /// @brief Method set_URI, addr 0x310922c, size 0x8, virtual false, abstract: false, final false
  inline void set_URI(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SourceAccessConfiguration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SourceAccessConfiguration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SourceAccessConfiguration(SourceAccessConfiguration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SourceAccessConfiguration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SourceAccessConfiguration(SourceAccessConfiguration const&) = delete;

  /// @brief Field _type, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Lambda::SourceAccessType* ____type;

  /// @brief Field _uri, offset: 0x18, size: 0x8, def value: None
  ::StringW ____uri;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::SourceAccessConfiguration, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::SourceAccessConfiguration, ____type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::SourceAccessConfiguration, ____uri) == 0x18, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::SourceAccessConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::SourceAccessConfiguration*, "Amazon.Lambda.Model", "SourceAccessConfiguration");
