#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ImageConfigResponse)
namespace Amazon::Lambda::Model {
class ImageConfigError;
}
namespace Amazon::Lambda::Model {
class ImageConfig;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class ImageConfigResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::ImageConfigResponse);
// Type: Amazon.Lambda.Model::ImageConfigResponse
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::ImageConfigResponse*
class CORDL_TYPE ImageConfigResponse : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Error, put = set_Error))::Amazon::Lambda::Model::ImageConfigError* Error;

  __declspec(property(get = get_ImageConfig, put = set_ImageConfig))::Amazon::Lambda::Model::ImageConfig* ImageConfig;

  /// @brief Field _error, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__error, put = __cordl_internal_set__error))::Amazon::Lambda::Model::ImageConfigError* _error;

  /// @brief Field _imageConfig, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__imageConfig, put = __cordl_internal_set__imageConfig))::Amazon::Lambda::Model::ImageConfig* _imageConfig;

  /// @brief Method IsSetError, addr 0x2bcc6e4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetError();

  /// @brief Method IsSetImageConfig, addr 0x2bcc704, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetImageConfig();

  static inline ::Amazon::Lambda::Model::ImageConfigResponse* New_ctor();

  constexpr ::Amazon::Lambda::Model::ImageConfigError*& __cordl_internal_get__error();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::ImageConfigError*> const& __cordl_internal_get__error() const;

  constexpr ::Amazon::Lambda::Model::ImageConfig*& __cordl_internal_get__imageConfig();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::ImageConfig*> const& __cordl_internal_get__imageConfig() const;

  constexpr void __cordl_internal_set__error(::Amazon::Lambda::Model::ImageConfigError* value);

  constexpr void __cordl_internal_set__imageConfig(::Amazon::Lambda::Model::ImageConfig* value);

  /// @brief Method .ctor, addr 0x2bcc714, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Error, addr 0x2bcc6d4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::ImageConfigError* get_Error();

  /// @brief Method get_ImageConfig, addr 0x2bcc6f4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::ImageConfig* get_ImageConfig();

  /// @brief Method set_Error, addr 0x2bcc6dc, size 0x8, virtual false, abstract: false, final false
  inline void set_Error(::Amazon::Lambda::Model::ImageConfigError* value);

  /// @brief Method set_ImageConfig, addr 0x2bcc6fc, size 0x8, virtual false, abstract: false, final false
  inline void set_ImageConfig(::Amazon::Lambda::Model::ImageConfig* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ImageConfigResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ImageConfigResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ImageConfigResponse(ImageConfigResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ImageConfigResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ImageConfigResponse(ImageConfigResponse const&) = delete;

  /// @brief Field _error, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Lambda::Model::ImageConfigError* ____error;

  /// @brief Field _imageConfig, offset: 0x18, size: 0x8, def value: None
  ::Amazon::Lambda::Model::ImageConfig* ____imageConfig;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::ImageConfigResponse, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ImageConfigResponse, ____error) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ImageConfigResponse, ____imageConfig) == 0x18, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::ImageConfigResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::ImageConfigResponse*, "Amazon.Lambda.Model", "ImageConfigResponse");
