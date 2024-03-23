#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DestinationConfig)
namespace Amazon::Lambda::Model {
class OnFailure;
}
namespace Amazon::Lambda::Model {
class OnSuccess;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class DestinationConfig;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::DestinationConfig);
// Type: Amazon.Lambda.Model::DestinationConfig
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::DestinationConfig*
class CORDL_TYPE DestinationConfig : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_OnFailure, put = set_OnFailure))::Amazon::Lambda::Model::OnFailure* OnFailure;

  __declspec(property(get = get_OnSuccess, put = set_OnSuccess))::Amazon::Lambda::Model::OnSuccess* OnSuccess;

  /// @brief Field _onFailure, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__onFailure, put = __cordl_internal_set__onFailure))::Amazon::Lambda::Model::OnFailure* _onFailure;

  /// @brief Field _onSuccess, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__onSuccess, put = __cordl_internal_set__onSuccess))::Amazon::Lambda::Model::OnSuccess* _onSuccess;

  /// @brief Method IsSetOnFailure, addr 0x2bc7b74, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetOnFailure();

  /// @brief Method IsSetOnSuccess, addr 0x2bc7b94, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetOnSuccess();

  static inline ::Amazon::Lambda::Model::DestinationConfig* New_ctor();

  constexpr ::Amazon::Lambda::Model::OnFailure*& __cordl_internal_get__onFailure();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::OnFailure*> const& __cordl_internal_get__onFailure() const;

  constexpr ::Amazon::Lambda::Model::OnSuccess*& __cordl_internal_get__onSuccess();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::OnSuccess*> const& __cordl_internal_get__onSuccess() const;

  constexpr void __cordl_internal_set__onFailure(::Amazon::Lambda::Model::OnFailure* value);

  constexpr void __cordl_internal_set__onSuccess(::Amazon::Lambda::Model::OnSuccess* value);

  /// @brief Method .ctor, addr 0x2bc7ba4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_OnFailure, addr 0x2bc7b64, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::OnFailure* get_OnFailure();

  /// @brief Method get_OnSuccess, addr 0x2bc7b84, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::OnSuccess* get_OnSuccess();

  /// @brief Method set_OnFailure, addr 0x2bc7b6c, size 0x8, virtual false, abstract: false, final false
  inline void set_OnFailure(::Amazon::Lambda::Model::OnFailure* value);

  /// @brief Method set_OnSuccess, addr 0x2bc7b8c, size 0x8, virtual false, abstract: false, final false
  inline void set_OnSuccess(::Amazon::Lambda::Model::OnSuccess* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DestinationConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DestinationConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DestinationConfig(DestinationConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DestinationConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DestinationConfig(DestinationConfig const&) = delete;

  /// @brief Field _onFailure, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Lambda::Model::OnFailure* ____onFailure;

  /// @brief Field _onSuccess, offset: 0x18, size: 0x8, def value: None
  ::Amazon::Lambda::Model::OnSuccess* ____onSuccess;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::DestinationConfig, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::DestinationConfig, ____onFailure) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::DestinationConfig, ____onSuccess) == 0x18, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::DestinationConfig);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::DestinationConfig*, "Amazon.Lambda.Model", "DestinationConfig");
