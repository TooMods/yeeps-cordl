#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PublishLayerVersionResponse)
namespace Amazon::Lambda::Model {
class LayerVersionContentOutput;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class PublishLayerVersionResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::PublishLayerVersionResponse);
// Type: Amazon.Lambda.Model::PublishLayerVersionResponse
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::PublishLayerVersionResponse*
class CORDL_TYPE PublishLayerVersionResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_CompatibleRuntimes, put = set_CompatibleRuntimes))::System::Collections::Generic::List_1<::StringW>* CompatibleRuntimes;

  __declspec(property(get = get_Content, put = set_Content))::Amazon::Lambda::Model::LayerVersionContentOutput* Content;

  __declspec(property(get = get_CreatedDate, put = set_CreatedDate))::StringW CreatedDate;

  __declspec(property(get = get_Description, put = set_Description))::StringW Description;

  __declspec(property(get = get_LayerArn, put = set_LayerArn))::StringW LayerArn;

  __declspec(property(get = get_LayerVersionArn, put = set_LayerVersionArn))::StringW LayerVersionArn;

  __declspec(property(get = get_LicenseInfo, put = set_LicenseInfo))::StringW LicenseInfo;

  __declspec(property(get = get_Version, put = set_Version)) int64_t Version;

  /// @brief Field _compatibleRuntimes, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__compatibleRuntimes, put = __cordl_internal_set__compatibleRuntimes))::System::Collections::Generic::List_1<::StringW>* _compatibleRuntimes;

  /// @brief Field _content, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__content, put = __cordl_internal_set__content))::Amazon::Lambda::Model::LayerVersionContentOutput* _content;

  /// @brief Field _createdDate, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__createdDate, put = __cordl_internal_set__createdDate))::StringW _createdDate;

  /// @brief Field _description, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__description, put = __cordl_internal_set__description))::StringW _description;

  /// @brief Field _layerArn, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__layerArn, put = __cordl_internal_set__layerArn))::StringW _layerArn;

  /// @brief Field _layerVersionArn, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__layerVersionArn, put = __cordl_internal_set__layerVersionArn))::StringW _layerVersionArn;

  /// @brief Field _licenseInfo, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__licenseInfo, put = __cordl_internal_set__licenseInfo))::StringW _licenseInfo;

  /// @brief Field _version, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version))::System::Nullable_1<int64_t> _version;

  /// @brief Method IsSetCompatibleRuntimes, addr 0x2bcf038, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetCompatibleRuntimes();

  /// @brief Method IsSetContent, addr 0x2bcf09c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetContent();

  /// @brief Method IsSetCreatedDate, addr 0x2bcf0bc, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetCreatedDate();

  /// @brief Method IsSetDescription, addr 0x2bcf0dc, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetDescription();

  /// @brief Method IsSetLayerArn, addr 0x2bcf0fc, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetLayerArn();

  /// @brief Method IsSetLayerVersionArn, addr 0x2bcf11c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetLayerVersionArn();

  /// @brief Method IsSetLicenseInfo, addr 0x2bcf13c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetLicenseInfo();

  /// @brief Method IsSetVersion, addr 0x2bcf1f8, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetVersion();

  static inline ::Amazon::Lambda::Model::PublishLayerVersionResponse* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__compatibleRuntimes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__compatibleRuntimes() const;

  constexpr ::Amazon::Lambda::Model::LayerVersionContentOutput*& __cordl_internal_get__content();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::LayerVersionContentOutput*> const& __cordl_internal_get__content() const;

  constexpr ::StringW const& __cordl_internal_get__createdDate() const;

  constexpr ::StringW& __cordl_internal_get__createdDate();

  constexpr ::StringW const& __cordl_internal_get__description() const;

  constexpr ::StringW& __cordl_internal_get__description();

  constexpr ::StringW const& __cordl_internal_get__layerArn() const;

  constexpr ::StringW& __cordl_internal_get__layerArn();

  constexpr ::StringW const& __cordl_internal_get__layerVersionArn() const;

  constexpr ::StringW& __cordl_internal_get__layerVersionArn();

  constexpr ::StringW const& __cordl_internal_get__licenseInfo() const;

  constexpr ::StringW& __cordl_internal_get__licenseInfo();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__version() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__version();

  constexpr void __cordl_internal_set__compatibleRuntimes(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__content(::Amazon::Lambda::Model::LayerVersionContentOutput* value);

  constexpr void __cordl_internal_set__createdDate(::StringW value);

  constexpr void __cordl_internal_set__description(::StringW value);

  constexpr void __cordl_internal_set__layerArn(::StringW value);

  constexpr void __cordl_internal_set__layerVersionArn(::StringW value);

  constexpr void __cordl_internal_set__licenseInfo(::StringW value);

  constexpr void __cordl_internal_set__version(::System::Nullable_1<int64_t> value);

  /// @brief Method .ctor, addr 0x2bcf234, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CompatibleRuntimes, addr 0x2bcf028, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_CompatibleRuntimes();

  /// @brief Method get_Content, addr 0x2bcf08c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::LayerVersionContentOutput* get_Content();

  /// @brief Method get_CreatedDate, addr 0x2bcf0ac, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_CreatedDate();

  /// @brief Method get_Description, addr 0x2bcf0cc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Description();

  /// @brief Method get_LayerArn, addr 0x2bcf0ec, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LayerArn();

  /// @brief Method get_LayerVersionArn, addr 0x2bcf10c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LayerVersionArn();

  /// @brief Method get_LicenseInfo, addr 0x2bcf12c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LicenseInfo();

  /// @brief Method get_Version, addr 0x2bcf14c, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_Version();

  /// @brief Method set_CompatibleRuntimes, addr 0x2bcf030, size 0x8, virtual false, abstract: false, final false
  inline void set_CompatibleRuntimes(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_Content, addr 0x2bcf094, size 0x8, virtual false, abstract: false, final false
  inline void set_Content(::Amazon::Lambda::Model::LayerVersionContentOutput* value);

  /// @brief Method set_CreatedDate, addr 0x2bcf0b4, size 0x8, virtual false, abstract: false, final false
  inline void set_CreatedDate(::StringW value);

  /// @brief Method set_Description, addr 0x2bcf0d4, size 0x8, virtual false, abstract: false, final false
  inline void set_Description(::StringW value);

  /// @brief Method set_LayerArn, addr 0x2bcf0f4, size 0x8, virtual false, abstract: false, final false
  inline void set_LayerArn(::StringW value);

  /// @brief Method set_LayerVersionArn, addr 0x2bcf114, size 0x8, virtual false, abstract: false, final false
  inline void set_LayerVersionArn(::StringW value);

  /// @brief Method set_LicenseInfo, addr 0x2bcf134, size 0x8, virtual false, abstract: false, final false
  inline void set_LicenseInfo(::StringW value);

  /// @brief Method set_Version, addr 0x2bcf188, size 0x70, virtual false, abstract: false, final false
  inline void set_Version(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PublishLayerVersionResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PublishLayerVersionResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PublishLayerVersionResponse(PublishLayerVersionResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PublishLayerVersionResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PublishLayerVersionResponse(PublishLayerVersionResponse const&) = delete;

  /// @brief Field _compatibleRuntimes, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____compatibleRuntimes;

  /// @brief Field _content, offset: 0x30, size: 0x8, def value: None
  ::Amazon::Lambda::Model::LayerVersionContentOutput* ____content;

  /// @brief Field _createdDate, offset: 0x38, size: 0x8, def value: None
  ::StringW ____createdDate;

  /// @brief Field _description, offset: 0x40, size: 0x8, def value: None
  ::StringW ____description;

  /// @brief Field _layerArn, offset: 0x48, size: 0x8, def value: None
  ::StringW ____layerArn;

  /// @brief Field _layerVersionArn, offset: 0x50, size: 0x8, def value: None
  ::StringW ____layerVersionArn;

  /// @brief Field _licenseInfo, offset: 0x58, size: 0x8, def value: None
  ::StringW ____licenseInfo;

  /// @brief Field _version, offset: 0x60, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::PublishLayerVersionResponse, 0x70>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::PublishLayerVersionResponse, ____compatibleRuntimes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::PublishLayerVersionResponse, ____content) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::PublishLayerVersionResponse, ____createdDate) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::PublishLayerVersionResponse, ____description) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::PublishLayerVersionResponse, ____layerArn) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::PublishLayerVersionResponse, ____layerVersionArn) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::PublishLayerVersionResponse, ____licenseInfo) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::PublishLayerVersionResponse, ____version) == 0x60, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::PublishLayerVersionResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::PublishLayerVersionResponse*, "Amazon.Lambda.Model", "PublishLayerVersionResponse");
