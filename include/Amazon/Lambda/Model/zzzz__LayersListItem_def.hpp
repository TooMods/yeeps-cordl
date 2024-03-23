#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LayersListItem)
namespace Amazon::Lambda::Model {
class LayerVersionsListItem;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class LayersListItem;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::LayersListItem);
// Type: Amazon.Lambda.Model::LayersListItem
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::LayersListItem*
class CORDL_TYPE LayersListItem : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_LatestMatchingVersion, put = set_LatestMatchingVersion))::Amazon::Lambda::Model::LayerVersionsListItem* LatestMatchingVersion;

  __declspec(property(get = get_LayerArn, put = set_LayerArn))::StringW LayerArn;

  __declspec(property(get = get_LayerName, put = set_LayerName))::StringW LayerName;

  /// @brief Field _latestMatchingVersion, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__latestMatchingVersion, put = __cordl_internal_set__latestMatchingVersion))::Amazon::Lambda::Model::LayerVersionsListItem* _latestMatchingVersion;

  /// @brief Field _layerArn, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__layerArn, put = __cordl_internal_set__layerArn))::StringW _layerArn;

  /// @brief Field _layerName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__layerName, put = __cordl_internal_set__layerName))::StringW _layerName;

  /// @brief Method IsSetLatestMatchingVersion, addr 0x2bccdb8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetLatestMatchingVersion();

  /// @brief Method IsSetLayerArn, addr 0x2bccdd8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetLayerArn();

  /// @brief Method IsSetLayerName, addr 0x2bccdf8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetLayerName();

  static inline ::Amazon::Lambda::Model::LayersListItem* New_ctor();

  constexpr ::Amazon::Lambda::Model::LayerVersionsListItem*& __cordl_internal_get__latestMatchingVersion();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::LayerVersionsListItem*> const& __cordl_internal_get__latestMatchingVersion() const;

  constexpr ::StringW const& __cordl_internal_get__layerArn() const;

  constexpr ::StringW& __cordl_internal_get__layerArn();

  constexpr ::StringW const& __cordl_internal_get__layerName() const;

  constexpr ::StringW& __cordl_internal_get__layerName();

  constexpr void __cordl_internal_set__latestMatchingVersion(::Amazon::Lambda::Model::LayerVersionsListItem* value);

  constexpr void __cordl_internal_set__layerArn(::StringW value);

  constexpr void __cordl_internal_set__layerName(::StringW value);

  /// @brief Method .ctor, addr 0x2bcce08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_LatestMatchingVersion, addr 0x2bccda8, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::LayerVersionsListItem* get_LatestMatchingVersion();

  /// @brief Method get_LayerArn, addr 0x2bccdc8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LayerArn();

  /// @brief Method get_LayerName, addr 0x2bccde8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LayerName();

  /// @brief Method set_LatestMatchingVersion, addr 0x2bccdb0, size 0x8, virtual false, abstract: false, final false
  inline void set_LatestMatchingVersion(::Amazon::Lambda::Model::LayerVersionsListItem* value);

  /// @brief Method set_LayerArn, addr 0x2bccdd0, size 0x8, virtual false, abstract: false, final false
  inline void set_LayerArn(::StringW value);

  /// @brief Method set_LayerName, addr 0x2bccdf0, size 0x8, virtual false, abstract: false, final false
  inline void set_LayerName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LayersListItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LayersListItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LayersListItem(LayersListItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LayersListItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LayersListItem(LayersListItem const&) = delete;

  /// @brief Field _latestMatchingVersion, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Lambda::Model::LayerVersionsListItem* ____latestMatchingVersion;

  /// @brief Field _layerArn, offset: 0x18, size: 0x8, def value: None
  ::StringW ____layerArn;

  /// @brief Field _layerName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____layerName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::LayersListItem, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::LayersListItem, ____latestMatchingVersion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::LayersListItem, ____layerArn) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::LayersListItem, ____layerName) == 0x20, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::LayersListItem);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::LayersListItem*, "Amazon.Lambda.Model", "LayersListItem");
