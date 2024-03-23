#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OnFailure)
// Forward declare root types
namespace Amazon::Lambda::Model {
class OnFailure;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::OnFailure);
// Type: Amazon.Lambda.Model::OnFailure
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::OnFailure*
class CORDL_TYPE OnFailure : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Destination, put = set_Destination))::StringW Destination;

  /// @brief Field _destination, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__destination, put = __cordl_internal_set__destination))::StringW _destination;

  /// @brief Method IsSetDestination, addr 0x2bcea44, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetDestination();

  static inline ::Amazon::Lambda::Model::OnFailure* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__destination() const;

  constexpr ::StringW& __cordl_internal_get__destination();

  constexpr void __cordl_internal_set__destination(::StringW value);

  /// @brief Method .ctor, addr 0x2bcea54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Destination, addr 0x2bcea34, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Destination();

  /// @brief Method set_Destination, addr 0x2bcea3c, size 0x8, virtual false, abstract: false, final false
  inline void set_Destination(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OnFailure();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OnFailure", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OnFailure(OnFailure&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OnFailure", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OnFailure(OnFailure const&) = delete;

  /// @brief Field _destination, offset: 0x10, size: 0x8, def value: None
  ::StringW ____destination;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::OnFailure, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::OnFailure, ____destination) == 0x10, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::OnFailure);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::OnFailure*, "Amazon.Lambda.Model", "OnFailure");
