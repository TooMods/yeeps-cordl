#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AllowedPublishers)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class AllowedPublishers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::AllowedPublishers);
// Type: Amazon.Lambda.Model::AllowedPublishers
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::AllowedPublishers*
class CORDL_TYPE AllowedPublishers : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_SigningProfileVersionArns, put = set_SigningProfileVersionArns))::System::Collections::Generic::List_1<::StringW>* SigningProfileVersionArns;

  /// @brief Field _signingProfileVersionArns, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__signingProfileVersionArns,
                      put = __cordl_internal_set__signingProfileVersionArns))::System::Collections::Generic::List_1<::StringW>* _signingProfileVersionArns;

  /// @brief Method IsSetSigningProfileVersionArns, addr 0x2bc45d8, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetSigningProfileVersionArns();

  static inline ::Amazon::Lambda::Model::AllowedPublishers* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__signingProfileVersionArns();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__signingProfileVersionArns() const;

  constexpr void __cordl_internal_set__signingProfileVersionArns(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x2bc462c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_SigningProfileVersionArns, addr 0x2bc45c8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_SigningProfileVersionArns();

  /// @brief Method set_SigningProfileVersionArns, addr 0x2bc45d0, size 0x8, virtual false, abstract: false, final false
  inline void set_SigningProfileVersionArns(::System::Collections::Generic::List_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AllowedPublishers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AllowedPublishers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AllowedPublishers(AllowedPublishers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AllowedPublishers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AllowedPublishers(AllowedPublishers const&) = delete;

  /// @brief Field _signingProfileVersionArns, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____signingProfileVersionArns;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::AllowedPublishers, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::AllowedPublishers, ____signingProfileVersionArns) == 0x10, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::AllowedPublishers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::AllowedPublishers*, "Amazon.Lambda.Model", "AllowedPublishers");
