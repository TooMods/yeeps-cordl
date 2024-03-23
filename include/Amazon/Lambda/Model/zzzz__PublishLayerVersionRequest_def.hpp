#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PublishLayerVersionRequest)
namespace Amazon::Lambda::Model {
class LayerVersionContentInput;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class PublishLayerVersionRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::PublishLayerVersionRequest);
// Type: Amazon.Lambda.Model::PublishLayerVersionRequest
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::PublishLayerVersionRequest*
class CORDL_TYPE PublishLayerVersionRequest : public ::Amazon::Lambda::AmazonLambdaRequest {
public:
  // Declarations
  __declspec(property(get = get_CompatibleRuntimes, put = set_CompatibleRuntimes))::System::Collections::Generic::List_1<::StringW>* CompatibleRuntimes;

  __declspec(property(get = get_Content, put = set_Content))::Amazon::Lambda::Model::LayerVersionContentInput* Content;

  __declspec(property(get = get_Description, put = set_Description))::StringW Description;

  __declspec(property(get = get_LayerName, put = set_LayerName))::StringW LayerName;

  __declspec(property(get = get_LicenseInfo, put = set_LicenseInfo))::StringW LicenseInfo;

  /// @brief Field _compatibleRuntimes, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__compatibleRuntimes, put = __cordl_internal_set__compatibleRuntimes))::System::Collections::Generic::List_1<::StringW>* _compatibleRuntimes;

  /// @brief Field _content, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__content, put = __cordl_internal_set__content))::Amazon::Lambda::Model::LayerVersionContentInput* _content;

  /// @brief Field _description, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__description, put = __cordl_internal_set__description))::StringW _description;

  /// @brief Field _layerName, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__layerName, put = __cordl_internal_set__layerName))::StringW _layerName;

  /// @brief Field _licenseInfo, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__licenseInfo, put = __cordl_internal_set__licenseInfo))::StringW _licenseInfo;

  /// @brief Method IsSetCompatibleRuntimes, addr 0x2bceed8, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetCompatibleRuntimes();

  /// @brief Method IsSetContent, addr 0x2bcef3c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetContent();

  /// @brief Method IsSetDescription, addr 0x2bcef5c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetDescription();

  /// @brief Method IsSetLayerName, addr 0x2bcef7c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetLayerName();

  /// @brief Method IsSetLicenseInfo, addr 0x2bcef9c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetLicenseInfo();

  static inline ::Amazon::Lambda::Model::PublishLayerVersionRequest* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__compatibleRuntimes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__compatibleRuntimes() const;

  constexpr ::Amazon::Lambda::Model::LayerVersionContentInput*& __cordl_internal_get__content();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::LayerVersionContentInput*> const& __cordl_internal_get__content() const;

  constexpr ::StringW const& __cordl_internal_get__description() const;

  constexpr ::StringW& __cordl_internal_get__description();

  constexpr ::StringW const& __cordl_internal_get__layerName() const;

  constexpr ::StringW& __cordl_internal_get__layerName();

  constexpr ::StringW const& __cordl_internal_get__licenseInfo() const;

  constexpr ::StringW& __cordl_internal_get__licenseInfo();

  constexpr void __cordl_internal_set__compatibleRuntimes(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__content(::Amazon::Lambda::Model::LayerVersionContentInput* value);

  constexpr void __cordl_internal_set__description(::StringW value);

  constexpr void __cordl_internal_set__layerName(::StringW value);

  constexpr void __cordl_internal_set__licenseInfo(::StringW value);

  /// @brief Method .ctor, addr 0x2bcefac, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CompatibleRuntimes, addr 0x2bceec8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_CompatibleRuntimes();

  /// @brief Method get_Content, addr 0x2bcef2c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::LayerVersionContentInput* get_Content();

  /// @brief Method get_Description, addr 0x2bcef4c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Description();

  /// @brief Method get_LayerName, addr 0x2bcef6c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LayerName();

  /// @brief Method get_LicenseInfo, addr 0x2bcef8c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LicenseInfo();

  /// @brief Method set_CompatibleRuntimes, addr 0x2bceed0, size 0x8, virtual false, abstract: false, final false
  inline void set_CompatibleRuntimes(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_Content, addr 0x2bcef34, size 0x8, virtual false, abstract: false, final false
  inline void set_Content(::Amazon::Lambda::Model::LayerVersionContentInput* value);

  /// @brief Method set_Description, addr 0x2bcef54, size 0x8, virtual false, abstract: false, final false
  inline void set_Description(::StringW value);

  /// @brief Method set_LayerName, addr 0x2bcef74, size 0x8, virtual false, abstract: false, final false
  inline void set_LayerName(::StringW value);

  /// @brief Method set_LicenseInfo, addr 0x2bcef94, size 0x8, virtual false, abstract: false, final false
  inline void set_LicenseInfo(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PublishLayerVersionRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PublishLayerVersionRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PublishLayerVersionRequest(PublishLayerVersionRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PublishLayerVersionRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PublishLayerVersionRequest(PublishLayerVersionRequest const&) = delete;

  /// @brief Field _compatibleRuntimes, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____compatibleRuntimes;

  /// @brief Field _content, offset: 0x40, size: 0x8, def value: None
  ::Amazon::Lambda::Model::LayerVersionContentInput* ____content;

  /// @brief Field _description, offset: 0x48, size: 0x8, def value: None
  ::StringW ____description;

  /// @brief Field _layerName, offset: 0x50, size: 0x8, def value: None
  ::StringW ____layerName;

  /// @brief Field _licenseInfo, offset: 0x58, size: 0x8, def value: None
  ::StringW ____licenseInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::PublishLayerVersionRequest, 0x60>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::PublishLayerVersionRequest, ____compatibleRuntimes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::PublishLayerVersionRequest, ____content) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::PublishLayerVersionRequest, ____description) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::PublishLayerVersionRequest, ____layerName) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::PublishLayerVersionRequest, ____licenseInfo) == 0x58, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::PublishLayerVersionRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::PublishLayerVersionRequest*, "Amazon.Lambda.Model", "PublishLayerVersionRequest");
