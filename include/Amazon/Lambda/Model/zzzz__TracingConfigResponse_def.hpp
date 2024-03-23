#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TracingConfigResponse)
namespace Amazon::Lambda {
class TracingMode;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class TracingConfigResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::TracingConfigResponse);
// Type: Amazon.Lambda.Model::TracingConfigResponse
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::TracingConfigResponse*
class CORDL_TYPE TracingConfigResponse : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Mode, put = set_Mode))::Amazon::Lambda::TracingMode* Mode;

  /// @brief Field _mode, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__mode, put = __cordl_internal_set__mode))::Amazon::Lambda::TracingMode* _mode;

  /// @brief Method IsSetMode, addr 0x3109500, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetMode();

  static inline ::Amazon::Lambda::Model::TracingConfigResponse* New_ctor();

  constexpr ::Amazon::Lambda::TracingMode*& __cordl_internal_get__mode();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::TracingMode*> const& __cordl_internal_get__mode() const;

  constexpr void __cordl_internal_set__mode(::Amazon::Lambda::TracingMode* value);

  /// @brief Method .ctor, addr 0x3109560, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Mode, addr 0x31094f0, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::TracingMode* get_Mode();

  /// @brief Method set_Mode, addr 0x31094f8, size 0x8, virtual false, abstract: false, final false
  inline void set_Mode(::Amazon::Lambda::TracingMode* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TracingConfigResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TracingConfigResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TracingConfigResponse(TracingConfigResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TracingConfigResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TracingConfigResponse(TracingConfigResponse const&) = delete;

  /// @brief Field _mode, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Lambda::TracingMode* ____mode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::TracingConfigResponse, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::TracingConfigResponse, ____mode) == 0x10, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::TracingConfigResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::TracingConfigResponse*, "Amazon.Lambda.Model", "TracingConfigResponse");
