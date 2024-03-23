#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__PhotonTransformViewPositionModel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonTransformViewPositionModel)
namespace Photon::Pun {
struct __PhotonTransformViewPositionModel__ExtrapolateOptions;
}
namespace Photon::Pun {
struct __PhotonTransformViewPositionModel__InterpolateOptions;
}
// Forward declare root types
namespace Photon::Pun {
struct __PhotonTransformViewPositionModel__ExtrapolateOptions;
}
namespace Photon::Pun {
struct __PhotonTransformViewPositionModel__InterpolateOptions;
}
namespace Photon::Pun {
class PhotonTransformViewPositionModel;
}
// Write type traits
MARK_VAL_T(::Photon::Pun::__PhotonTransformViewPositionModel__ExtrapolateOptions);
MARK_VAL_T(::Photon::Pun::__PhotonTransformViewPositionModel__InterpolateOptions);
MARK_REF_PTR_T(::Photon::Pun::PhotonTransformViewPositionModel);
// Type: ::InterpolateOptions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: true
// CS Name: ::PhotonTransformViewPositionModel::InterpolateOptions
struct CORDL_TYPE __PhotonTransformViewPositionModel__InterpolateOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PhotonTransformViewPositionModel__InterpolateOptions_Unwrapped
  enum struct ____PhotonTransformViewPositionModel__InterpolateOptions_Unwrapped : int32_t {
    __E_Disabled = static_cast<int32_t>(0x0),
    __E_FixedSpeed = static_cast<int32_t>(0x1),
    __E_EstimatedSpeed = static_cast<int32_t>(0x2),
    __E_SynchronizeValues = static_cast<int32_t>(0x3),
    __E_Lerp = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PhotonTransformViewPositionModel__InterpolateOptions_Unwrapped() const noexcept {
    return static_cast<____PhotonTransformViewPositionModel__InterpolateOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PhotonTransformViewPositionModel__InterpolateOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PhotonTransformViewPositionModel__InterpolateOptions(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Disabled value: static_cast<int32_t>(0x0)
  static ::Photon::Pun::__PhotonTransformViewPositionModel__InterpolateOptions const Disabled;

  /// @brief Field EstimatedSpeed value: static_cast<int32_t>(0x2)
  static ::Photon::Pun::__PhotonTransformViewPositionModel__InterpolateOptions const EstimatedSpeed;

  /// @brief Field FixedSpeed value: static_cast<int32_t>(0x1)
  static ::Photon::Pun::__PhotonTransformViewPositionModel__InterpolateOptions const FixedSpeed;

  /// @brief Field Lerp value: static_cast<int32_t>(0x4)
  static ::Photon::Pun::__PhotonTransformViewPositionModel__InterpolateOptions const Lerp;

  /// @brief Field SynchronizeValues value: static_cast<int32_t>(0x3)
  static ::Photon::Pun::__PhotonTransformViewPositionModel__InterpolateOptions const SynchronizeValues;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::__PhotonTransformViewPositionModel__InterpolateOptions, 0x4>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::__PhotonTransformViewPositionModel__InterpolateOptions, value__) == 0x0, "Offset mismatch!");

} // namespace Photon::Pun
// Type: ::ExtrapolateOptions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: true
// CS Name: ::PhotonTransformViewPositionModel::ExtrapolateOptions
struct CORDL_TYPE __PhotonTransformViewPositionModel__ExtrapolateOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PhotonTransformViewPositionModel__ExtrapolateOptions_Unwrapped
  enum struct ____PhotonTransformViewPositionModel__ExtrapolateOptions_Unwrapped : int32_t {
    __E_Disabled = static_cast<int32_t>(0x0),
    __E_SynchronizeValues = static_cast<int32_t>(0x1),
    __E_EstimateSpeedAndTurn = static_cast<int32_t>(0x2),
    __E_FixedSpeed = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PhotonTransformViewPositionModel__ExtrapolateOptions_Unwrapped() const noexcept {
    return static_cast<____PhotonTransformViewPositionModel__ExtrapolateOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PhotonTransformViewPositionModel__ExtrapolateOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PhotonTransformViewPositionModel__ExtrapolateOptions(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Disabled value: static_cast<int32_t>(0x0)
  static ::Photon::Pun::__PhotonTransformViewPositionModel__ExtrapolateOptions const Disabled;

  /// @brief Field EstimateSpeedAndTurn value: static_cast<int32_t>(0x2)
  static ::Photon::Pun::__PhotonTransformViewPositionModel__ExtrapolateOptions const EstimateSpeedAndTurn;

  /// @brief Field FixedSpeed value: static_cast<int32_t>(0x3)
  static ::Photon::Pun::__PhotonTransformViewPositionModel__ExtrapolateOptions const FixedSpeed;

  /// @brief Field SynchronizeValues value: static_cast<int32_t>(0x1)
  static ::Photon::Pun::__PhotonTransformViewPositionModel__ExtrapolateOptions const SynchronizeValues;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::__PhotonTransformViewPositionModel__ExtrapolateOptions, 0x4>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::__PhotonTransformViewPositionModel__ExtrapolateOptions, value__) == 0x0, "Offset mismatch!");

} // namespace Photon::Pun
// Type: Photon.Pun::PhotonTransformViewPositionModel
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::Photon.Pun::PhotonTransformViewPositionModel*
class CORDL_TYPE PhotonTransformViewPositionModel : public ::System::Object {
public:
  // Declarations
  using ExtrapolateOptions = ::Photon::Pun::__PhotonTransformViewPositionModel__ExtrapolateOptions;

  using InterpolateOptions = ::Photon::Pun::__PhotonTransformViewPositionModel__InterpolateOptions;

  /// @brief Field ExtrapolateIncludingRoundTripTime, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_ExtrapolateIncludingRoundTripTime, put = __cordl_internal_set_ExtrapolateIncludingRoundTripTime)) bool ExtrapolateIncludingRoundTripTime;

  /// @brief Field ExtrapolateNumberOfStoredPositions, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_ExtrapolateNumberOfStoredPositions, put = __cordl_internal_set_ExtrapolateNumberOfStoredPositions)) int32_t ExtrapolateNumberOfStoredPositions;

  /// @brief Field ExtrapolateOption, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_ExtrapolateOption,
                      put = __cordl_internal_set_ExtrapolateOption))::Photon::Pun::__PhotonTransformViewPositionModel__ExtrapolateOptions ExtrapolateOption;

  /// @brief Field ExtrapolateSpeed, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_ExtrapolateSpeed, put = __cordl_internal_set_ExtrapolateSpeed)) float_t ExtrapolateSpeed;

  /// @brief Field InterpolateLerpSpeed, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_InterpolateLerpSpeed, put = __cordl_internal_set_InterpolateLerpSpeed)) float_t InterpolateLerpSpeed;

  /// @brief Field InterpolateMoveTowardsSpeed, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_InterpolateMoveTowardsSpeed, put = __cordl_internal_set_InterpolateMoveTowardsSpeed)) float_t InterpolateMoveTowardsSpeed;

  /// @brief Field InterpolateOption, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_InterpolateOption,
                      put = __cordl_internal_set_InterpolateOption))::Photon::Pun::__PhotonTransformViewPositionModel__InterpolateOptions InterpolateOption;

  /// @brief Field SynchronizeEnabled, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_SynchronizeEnabled, put = __cordl_internal_set_SynchronizeEnabled)) bool SynchronizeEnabled;

  /// @brief Field TeleportEnabled, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_TeleportEnabled, put = __cordl_internal_set_TeleportEnabled)) bool TeleportEnabled;

  /// @brief Field TeleportIfDistanceGreaterThan, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_TeleportIfDistanceGreaterThan, put = __cordl_internal_set_TeleportIfDistanceGreaterThan)) float_t TeleportIfDistanceGreaterThan;

  static inline ::Photon::Pun::PhotonTransformViewPositionModel* New_ctor();

  constexpr bool const& __cordl_internal_get_ExtrapolateIncludingRoundTripTime() const;

  constexpr bool& __cordl_internal_get_ExtrapolateIncludingRoundTripTime();

  constexpr int32_t const& __cordl_internal_get_ExtrapolateNumberOfStoredPositions() const;

  constexpr int32_t& __cordl_internal_get_ExtrapolateNumberOfStoredPositions();

  constexpr ::Photon::Pun::__PhotonTransformViewPositionModel__ExtrapolateOptions const& __cordl_internal_get_ExtrapolateOption() const;

  constexpr ::Photon::Pun::__PhotonTransformViewPositionModel__ExtrapolateOptions& __cordl_internal_get_ExtrapolateOption();

  constexpr float_t const& __cordl_internal_get_ExtrapolateSpeed() const;

  constexpr float_t& __cordl_internal_get_ExtrapolateSpeed();

  constexpr float_t const& __cordl_internal_get_InterpolateLerpSpeed() const;

  constexpr float_t& __cordl_internal_get_InterpolateLerpSpeed();

  constexpr float_t const& __cordl_internal_get_InterpolateMoveTowardsSpeed() const;

  constexpr float_t& __cordl_internal_get_InterpolateMoveTowardsSpeed();

  constexpr ::Photon::Pun::__PhotonTransformViewPositionModel__InterpolateOptions const& __cordl_internal_get_InterpolateOption() const;

  constexpr ::Photon::Pun::__PhotonTransformViewPositionModel__InterpolateOptions& __cordl_internal_get_InterpolateOption();

  constexpr bool const& __cordl_internal_get_SynchronizeEnabled() const;

  constexpr bool& __cordl_internal_get_SynchronizeEnabled();

  constexpr bool const& __cordl_internal_get_TeleportEnabled() const;

  constexpr bool& __cordl_internal_get_TeleportEnabled();

  constexpr float_t const& __cordl_internal_get_TeleportIfDistanceGreaterThan() const;

  constexpr float_t& __cordl_internal_get_TeleportIfDistanceGreaterThan();

  constexpr void __cordl_internal_set_ExtrapolateIncludingRoundTripTime(bool value);

  constexpr void __cordl_internal_set_ExtrapolateNumberOfStoredPositions(int32_t value);

  constexpr void __cordl_internal_set_ExtrapolateOption(::Photon::Pun::__PhotonTransformViewPositionModel__ExtrapolateOptions value);

  constexpr void __cordl_internal_set_ExtrapolateSpeed(float_t value);

  constexpr void __cordl_internal_set_InterpolateLerpSpeed(float_t value);

  constexpr void __cordl_internal_set_InterpolateMoveTowardsSpeed(float_t value);

  constexpr void __cordl_internal_set_InterpolateOption(::Photon::Pun::__PhotonTransformViewPositionModel__InterpolateOptions value);

  constexpr void __cordl_internal_set_SynchronizeEnabled(bool value);

  constexpr void __cordl_internal_set_TeleportEnabled(bool value);

  constexpr void __cordl_internal_set_TeleportIfDistanceGreaterThan(float_t value);

  /// @brief Method .ctor, addr 0x2608298, size 0x34, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhotonTransformViewPositionModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PhotonTransformViewPositionModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhotonTransformViewPositionModel(PhotonTransformViewPositionModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhotonTransformViewPositionModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhotonTransformViewPositionModel(PhotonTransformViewPositionModel const&) = delete;

  /// @brief Field SynchronizeEnabled, offset: 0x10, size: 0x1, def value: None
  bool ___SynchronizeEnabled;

  /// @brief Field TeleportEnabled, offset: 0x11, size: 0x1, def value: None
  bool ___TeleportEnabled;

  /// @brief Field TeleportIfDistanceGreaterThan, offset: 0x14, size: 0x4, def value: None
  float_t ___TeleportIfDistanceGreaterThan;

  /// @brief Field InterpolateOption, offset: 0x18, size: 0x4, def value: None
  ::Photon::Pun::__PhotonTransformViewPositionModel__InterpolateOptions ___InterpolateOption;

  /// @brief Field InterpolateMoveTowardsSpeed, offset: 0x1c, size: 0x4, def value: None
  float_t ___InterpolateMoveTowardsSpeed;

  /// @brief Field InterpolateLerpSpeed, offset: 0x20, size: 0x4, def value: None
  float_t ___InterpolateLerpSpeed;

  /// @brief Field ExtrapolateOption, offset: 0x24, size: 0x4, def value: None
  ::Photon::Pun::__PhotonTransformViewPositionModel__ExtrapolateOptions ___ExtrapolateOption;

  /// @brief Field ExtrapolateSpeed, offset: 0x28, size: 0x4, def value: None
  float_t ___ExtrapolateSpeed;

  /// @brief Field ExtrapolateIncludingRoundTripTime, offset: 0x2c, size: 0x1, def value: None
  bool ___ExtrapolateIncludingRoundTripTime;

  /// @brief Field ExtrapolateNumberOfStoredPositions, offset: 0x30, size: 0x4, def value: None
  int32_t ___ExtrapolateNumberOfStoredPositions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::PhotonTransformViewPositionModel, 0x38>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewPositionModel, ___SynchronizeEnabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewPositionModel, ___TeleportEnabled) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewPositionModel, ___TeleportIfDistanceGreaterThan) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewPositionModel, ___InterpolateOption) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewPositionModel, ___InterpolateMoveTowardsSpeed) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewPositionModel, ___InterpolateLerpSpeed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewPositionModel, ___ExtrapolateOption) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewPositionModel, ___ExtrapolateSpeed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewPositionModel, ___ExtrapolateIncludingRoundTripTime) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewPositionModel, ___ExtrapolateNumberOfStoredPositions) == 0x30, "Offset mismatch!");

} // namespace Photon::Pun
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::__PhotonTransformViewPositionModel__ExtrapolateOptions, "Photon.Pun", "PhotonTransformViewPositionModel/ExtrapolateOptions");
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::__PhotonTransformViewPositionModel__InterpolateOptions, "Photon.Pun", "PhotonTransformViewPositionModel/InterpolateOptions");
NEED_NO_BOX(::Photon::Pun::PhotonTransformViewPositionModel);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::PhotonTransformViewPositionModel*, "Photon.Pun", "PhotonTransformViewPositionModel");
