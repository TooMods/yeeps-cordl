#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPun_def.hpp"
#include "Photon/Pun/zzzz__PhotonAnimatorView_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonAnimatorView)
namespace Photon::Pun {
class IPunObservable;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStreamQueue;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace Photon::Pun {
struct __PhotonAnimatorView__ParameterType;
}
namespace Photon::Pun {
struct __PhotonAnimatorView__SynchronizeType;
}
namespace Photon::Pun {
class __PhotonAnimatorView__SynchronizedLayer;
}
namespace Photon::Pun {
class __PhotonAnimatorView__SynchronizedParameter;
}
namespace Photon::Pun {
class __PhotonAnimatorView____c__DisplayClass18_0;
}
namespace Photon::Pun {
class __PhotonAnimatorView____c__DisplayClass19_0;
}
namespace Photon::Pun {
class __PhotonAnimatorView____c__DisplayClass22_0;
}
namespace Photon::Pun {
class __PhotonAnimatorView____c__DisplayClass23_0;
}
namespace Photon::Pun {
class __PhotonAnimatorView____c__DisplayClass24_0;
}
namespace Photon::Pun {
class __PhotonAnimatorView____c__DisplayClass25_0;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace Photon::Pun {
struct __PhotonAnimatorView__ParameterType;
}
namespace Photon::Pun {
struct __PhotonAnimatorView__SynchronizeType;
}
namespace Photon::Pun {
class PhotonAnimatorView;
}
namespace Photon::Pun {
class __PhotonAnimatorView__SynchronizedLayer;
}
namespace Photon::Pun {
class __PhotonAnimatorView__SynchronizedParameter;
}
namespace Photon::Pun {
class __PhotonAnimatorView____c__DisplayClass18_0;
}
namespace Photon::Pun {
class __PhotonAnimatorView____c__DisplayClass19_0;
}
namespace Photon::Pun {
class __PhotonAnimatorView____c__DisplayClass22_0;
}
namespace Photon::Pun {
class __PhotonAnimatorView____c__DisplayClass23_0;
}
namespace Photon::Pun {
class __PhotonAnimatorView____c__DisplayClass24_0;
}
namespace Photon::Pun {
class __PhotonAnimatorView____c__DisplayClass25_0;
}
// Write type traits
MARK_VAL_T(::Photon::Pun::__PhotonAnimatorView__ParameterType);
MARK_VAL_T(::Photon::Pun::__PhotonAnimatorView__SynchronizeType);
MARK_REF_PTR_T(::Photon::Pun::PhotonAnimatorView);
MARK_REF_PTR_T(::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer);
MARK_REF_PTR_T(::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter);
MARK_REF_PTR_T(::Photon::Pun::__PhotonAnimatorView____c__DisplayClass18_0);
MARK_REF_PTR_T(::Photon::Pun::__PhotonAnimatorView____c__DisplayClass19_0);
MARK_REF_PTR_T(::Photon::Pun::__PhotonAnimatorView____c__DisplayClass22_0);
MARK_REF_PTR_T(::Photon::Pun::__PhotonAnimatorView____c__DisplayClass23_0);
MARK_REF_PTR_T(::Photon::Pun::__PhotonAnimatorView____c__DisplayClass24_0);
MARK_REF_PTR_T(::Photon::Pun::__PhotonAnimatorView____c__DisplayClass25_0);
// Type: ::ParameterType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: true
// CS Name: ::PhotonAnimatorView::ParameterType
struct CORDL_TYPE __PhotonAnimatorView__ParameterType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PhotonAnimatorView__ParameterType_Unwrapped
  enum struct ____PhotonAnimatorView__ParameterType_Unwrapped : int32_t {
    __E_Float = static_cast<int32_t>(0x1),
    __E_Int = static_cast<int32_t>(0x3),
    __E_Bool = static_cast<int32_t>(0x4),
    __E_Trigger = static_cast<int32_t>(0x9),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PhotonAnimatorView__ParameterType_Unwrapped() const noexcept {
    return static_cast<____PhotonAnimatorView__ParameterType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PhotonAnimatorView__ParameterType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PhotonAnimatorView__ParameterType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Bool value: static_cast<int32_t>(0x4)
  static ::Photon::Pun::__PhotonAnimatorView__ParameterType const Bool;

  /// @brief Field Float value: static_cast<int32_t>(0x1)
  static ::Photon::Pun::__PhotonAnimatorView__ParameterType const Float;

  /// @brief Field Int value: static_cast<int32_t>(0x3)
  static ::Photon::Pun::__PhotonAnimatorView__ParameterType const Int;

  /// @brief Field Trigger value: static_cast<int32_t>(0x9)
  static ::Photon::Pun::__PhotonAnimatorView__ParameterType const Trigger;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::__PhotonAnimatorView__ParameterType, 0x4>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::__PhotonAnimatorView__ParameterType, value__) == 0x0, "Offset mismatch!");

} // namespace Photon::Pun
// Type: ::SynchronizeType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: true
// CS Name: ::PhotonAnimatorView::SynchronizeType
struct CORDL_TYPE __PhotonAnimatorView__SynchronizeType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PhotonAnimatorView__SynchronizeType_Unwrapped
  enum struct ____PhotonAnimatorView__SynchronizeType_Unwrapped : int32_t {
    __E_Disabled = static_cast<int32_t>(0x0),
    __E_Discrete = static_cast<int32_t>(0x1),
    __E_Continuous = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PhotonAnimatorView__SynchronizeType_Unwrapped() const noexcept {
    return static_cast<____PhotonAnimatorView__SynchronizeType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PhotonAnimatorView__SynchronizeType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PhotonAnimatorView__SynchronizeType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Continuous value: static_cast<int32_t>(0x2)
  static ::Photon::Pun::__PhotonAnimatorView__SynchronizeType const Continuous;

  /// @brief Field Disabled value: static_cast<int32_t>(0x0)
  static ::Photon::Pun::__PhotonAnimatorView__SynchronizeType const Disabled;

  /// @brief Field Discrete value: static_cast<int32_t>(0x1)
  static ::Photon::Pun::__PhotonAnimatorView__SynchronizeType const Discrete;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::__PhotonAnimatorView__SynchronizeType, 0x4>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::__PhotonAnimatorView__SynchronizeType, value__) == 0x0, "Offset mismatch!");

} // namespace Photon::Pun
// Type: ::SynchronizedParameter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::PhotonAnimatorView::SynchronizedParameter*
class CORDL_TYPE __PhotonAnimatorView__SynchronizedParameter : public ::System::Object {
public:
  // Declarations
  /// @brief Field Name, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Name, put = __cordl_internal_set_Name))::StringW Name;

  /// @brief Field SynchronizeType, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_SynchronizeType, put = __cordl_internal_set_SynchronizeType))::Photon::Pun::__PhotonAnimatorView__SynchronizeType SynchronizeType;

  /// @brief Field Type, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_Type, put = __cordl_internal_set_Type))::Photon::Pun::__PhotonAnimatorView__ParameterType Type;

  static inline ::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_Name() const;

  constexpr ::StringW& __cordl_internal_get_Name();

  constexpr ::Photon::Pun::__PhotonAnimatorView__SynchronizeType const& __cordl_internal_get_SynchronizeType() const;

  constexpr ::Photon::Pun::__PhotonAnimatorView__SynchronizeType& __cordl_internal_get_SynchronizeType();

  constexpr ::Photon::Pun::__PhotonAnimatorView__ParameterType const& __cordl_internal_get_Type() const;

  constexpr ::Photon::Pun::__PhotonAnimatorView__ParameterType& __cordl_internal_get_Type();

  constexpr void __cordl_internal_set_Name(::StringW value);

  constexpr void __cordl_internal_set_SynchronizeType(::Photon::Pun::__PhotonAnimatorView__SynchronizeType value);

  constexpr void __cordl_internal_set_Type(::Photon::Pun::__PhotonAnimatorView__ParameterType value);

  /// @brief Method .ctor, addr 0x2604770, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PhotonAnimatorView__SynchronizedParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PhotonAnimatorView__SynchronizedParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PhotonAnimatorView__SynchronizedParameter(__PhotonAnimatorView__SynchronizedParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PhotonAnimatorView__SynchronizedParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PhotonAnimatorView__SynchronizedParameter(__PhotonAnimatorView__SynchronizedParameter const&) = delete;

  /// @brief Field Type, offset: 0x10, size: 0x4, def value: None
  ::Photon::Pun::__PhotonAnimatorView__ParameterType ___Type;

  /// @brief Field SynchronizeType, offset: 0x14, size: 0x4, def value: None
  ::Photon::Pun::__PhotonAnimatorView__SynchronizeType ___SynchronizeType;

  /// @brief Field Name, offset: 0x18, size: 0x8, def value: None
  ::StringW ___Name;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter, 0x20>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter, ___Type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter, ___SynchronizeType) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter, ___Name) == 0x18, "Offset mismatch!");

} // namespace Photon::Pun
// Type: ::SynchronizedLayer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::PhotonAnimatorView::SynchronizedLayer*
class CORDL_TYPE __PhotonAnimatorView__SynchronizedLayer : public ::System::Object {
public:
  // Declarations
  /// @brief Field LayerIndex, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_LayerIndex, put = __cordl_internal_set_LayerIndex)) int32_t LayerIndex;

  /// @brief Field SynchronizeType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_SynchronizeType, put = __cordl_internal_set_SynchronizeType))::Photon::Pun::__PhotonAnimatorView__SynchronizeType SynchronizeType;

  static inline ::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer* New_ctor();

  constexpr int32_t const& __cordl_internal_get_LayerIndex() const;

  constexpr int32_t& __cordl_internal_get_LayerIndex();

  constexpr ::Photon::Pun::__PhotonAnimatorView__SynchronizeType const& __cordl_internal_get_SynchronizeType() const;

  constexpr ::Photon::Pun::__PhotonAnimatorView__SynchronizeType& __cordl_internal_get_SynchronizeType();

  constexpr void __cordl_internal_set_LayerIndex(int32_t value);

  constexpr void __cordl_internal_set_SynchronizeType(::Photon::Pun::__PhotonAnimatorView__SynchronizeType value);

  /// @brief Method .ctor, addr 0x2604568, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PhotonAnimatorView__SynchronizedLayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PhotonAnimatorView__SynchronizedLayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PhotonAnimatorView__SynchronizedLayer(__PhotonAnimatorView__SynchronizedLayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PhotonAnimatorView__SynchronizedLayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PhotonAnimatorView__SynchronizedLayer(__PhotonAnimatorView__SynchronizedLayer const&) = delete;

  /// @brief Field SynchronizeType, offset: 0x10, size: 0x4, def value: None
  ::Photon::Pun::__PhotonAnimatorView__SynchronizeType ___SynchronizeType;

  /// @brief Field LayerIndex, offset: 0x14, size: 0x4, def value: None
  int32_t ___LayerIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer, 0x18>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer, ___SynchronizeType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer, ___LayerIndex) == 0x14, "Offset mismatch!");

} // namespace Photon::Pun
// Type: ::<>c__DisplayClass18_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::PhotonAnimatorView::<>c__DisplayClass18_0*
class CORDL_TYPE __PhotonAnimatorView____c__DisplayClass18_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field layerIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_layerIndex, put = __cordl_internal_set_layerIndex)) int32_t layerIndex;

  static inline ::Photon::Pun::__PhotonAnimatorView____c__DisplayClass18_0* New_ctor();

  /// @brief Method <DoesLayerSynchronizeTypeExist>b__0, addr 0x2605400, size 0x24, virtual false, abstract: false, final false
  inline bool _DoesLayerSynchronizeTypeExist_b__0(::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer* item);

  constexpr int32_t const& __cordl_internal_get_layerIndex() const;

  constexpr int32_t& __cordl_internal_get_layerIndex();

  constexpr void __cordl_internal_set_layerIndex(int32_t value);

  /// @brief Method .ctor, addr 0x2604024, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PhotonAnimatorView____c__DisplayClass18_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PhotonAnimatorView____c__DisplayClass18_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PhotonAnimatorView____c__DisplayClass18_0(__PhotonAnimatorView____c__DisplayClass18_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PhotonAnimatorView____c__DisplayClass18_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PhotonAnimatorView____c__DisplayClass18_0(__PhotonAnimatorView____c__DisplayClass18_0 const&) = delete;

  /// @brief Field layerIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ___layerIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::__PhotonAnimatorView____c__DisplayClass18_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::__PhotonAnimatorView____c__DisplayClass18_0, ___layerIndex) == 0x10, "Offset mismatch!");

} // namespace Photon::Pun
// Type: ::<>c__DisplayClass19_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::PhotonAnimatorView::<>c__DisplayClass19_0*
class CORDL_TYPE __PhotonAnimatorView____c__DisplayClass19_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::StringW name;

  static inline ::Photon::Pun::__PhotonAnimatorView____c__DisplayClass19_0* New_ctor();

  /// @brief Method <DoesParameterSynchronizeTypeExist>b__0, addr 0x2605424, size 0x24, virtual false, abstract: false, final false
  inline bool _DoesParameterSynchronizeTypeExist_b__0(::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter* item);

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr void __cordl_internal_set_name(::StringW value);

  /// @brief Method .ctor, addr 0x2604114, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PhotonAnimatorView____c__DisplayClass19_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PhotonAnimatorView____c__DisplayClass19_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PhotonAnimatorView____c__DisplayClass19_0(__PhotonAnimatorView____c__DisplayClass19_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PhotonAnimatorView____c__DisplayClass19_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PhotonAnimatorView____c__DisplayClass19_0(__PhotonAnimatorView____c__DisplayClass19_0 const&) = delete;

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::__PhotonAnimatorView____c__DisplayClass19_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::__PhotonAnimatorView____c__DisplayClass19_0, ___name) == 0x10, "Offset mismatch!");

} // namespace Photon::Pun
// Type: ::<>c__DisplayClass22_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::PhotonAnimatorView::<>c__DisplayClass22_0*
class CORDL_TYPE __PhotonAnimatorView____c__DisplayClass22_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field layerIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_layerIndex, put = __cordl_internal_set_layerIndex)) int32_t layerIndex;

  static inline ::Photon::Pun::__PhotonAnimatorView____c__DisplayClass22_0* New_ctor();

  /// @brief Method <GetLayerSynchronizeType>b__0, addr 0x2605448, size 0x24, virtual false, abstract: false, final false
  inline bool _GetLayerSynchronizeType_b__0(::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer* item);

  constexpr int32_t const& __cordl_internal_get_layerIndex() const;

  constexpr int32_t& __cordl_internal_get_layerIndex();

  constexpr void __cordl_internal_set_layerIndex(int32_t value);

  /// @brief Method .ctor, addr 0x260424c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PhotonAnimatorView____c__DisplayClass22_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PhotonAnimatorView____c__DisplayClass22_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PhotonAnimatorView____c__DisplayClass22_0(__PhotonAnimatorView____c__DisplayClass22_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PhotonAnimatorView____c__DisplayClass22_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PhotonAnimatorView____c__DisplayClass22_0(__PhotonAnimatorView____c__DisplayClass22_0 const&) = delete;

  /// @brief Field layerIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ___layerIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::__PhotonAnimatorView____c__DisplayClass22_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::__PhotonAnimatorView____c__DisplayClass22_0, ___layerIndex) == 0x10, "Offset mismatch!");

} // namespace Photon::Pun
// Type: ::<>c__DisplayClass23_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::PhotonAnimatorView::<>c__DisplayClass23_0*
class CORDL_TYPE __PhotonAnimatorView____c__DisplayClass23_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::StringW name;

  static inline ::Photon::Pun::__PhotonAnimatorView____c__DisplayClass23_0* New_ctor();

  /// @brief Method <GetParameterSynchronizeType>b__0, addr 0x260546c, size 0x24, virtual false, abstract: false, final false
  inline bool _GetParameterSynchronizeType_b__0(::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter* item);

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr void __cordl_internal_set_name(::StringW value);

  /// @brief Method .ctor, addr 0x2604374, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PhotonAnimatorView____c__DisplayClass23_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PhotonAnimatorView____c__DisplayClass23_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PhotonAnimatorView____c__DisplayClass23_0(__PhotonAnimatorView____c__DisplayClass23_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PhotonAnimatorView____c__DisplayClass23_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PhotonAnimatorView____c__DisplayClass23_0(__PhotonAnimatorView____c__DisplayClass23_0 const&) = delete;

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::__PhotonAnimatorView____c__DisplayClass23_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::__PhotonAnimatorView____c__DisplayClass23_0, ___name) == 0x10, "Offset mismatch!");

} // namespace Photon::Pun
// Type: ::<>c__DisplayClass24_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::PhotonAnimatorView::<>c__DisplayClass24_0*
class CORDL_TYPE __PhotonAnimatorView____c__DisplayClass24_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field layerIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_layerIndex, put = __cordl_internal_set_layerIndex)) int32_t layerIndex;

  static inline ::Photon::Pun::__PhotonAnimatorView____c__DisplayClass24_0* New_ctor();

  /// @brief Method <SetLayerSynchronized>b__0, addr 0x2605490, size 0x24, virtual false, abstract: false, final false
  inline bool _SetLayerSynchronized_b__0(::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer* item);

  constexpr int32_t const& __cordl_internal_get_layerIndex() const;

  constexpr int32_t& __cordl_internal_get_layerIndex();

  constexpr void __cordl_internal_set_layerIndex(int32_t value);

  /// @brief Method .ctor, addr 0x2604560, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PhotonAnimatorView____c__DisplayClass24_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PhotonAnimatorView____c__DisplayClass24_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PhotonAnimatorView____c__DisplayClass24_0(__PhotonAnimatorView____c__DisplayClass24_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PhotonAnimatorView____c__DisplayClass24_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PhotonAnimatorView____c__DisplayClass24_0(__PhotonAnimatorView____c__DisplayClass24_0 const&) = delete;

  /// @brief Field layerIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ___layerIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::__PhotonAnimatorView____c__DisplayClass24_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::__PhotonAnimatorView____c__DisplayClass24_0, ___layerIndex) == 0x10, "Offset mismatch!");

} // namespace Photon::Pun
// Type: ::<>c__DisplayClass25_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::PhotonAnimatorView::<>c__DisplayClass25_0*
class CORDL_TYPE __PhotonAnimatorView____c__DisplayClass25_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::StringW name;

  static inline ::Photon::Pun::__PhotonAnimatorView____c__DisplayClass25_0* New_ctor();

  /// @brief Method <SetParameterSynchronized>b__0, addr 0x26054b4, size 0x24, virtual false, abstract: false, final false
  inline bool _SetParameterSynchronized_b__0(::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter* item);

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr void __cordl_internal_set_name(::StringW value);

  /// @brief Method .ctor, addr 0x2604768, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PhotonAnimatorView____c__DisplayClass25_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PhotonAnimatorView____c__DisplayClass25_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PhotonAnimatorView____c__DisplayClass25_0(__PhotonAnimatorView____c__DisplayClass25_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PhotonAnimatorView____c__DisplayClass25_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PhotonAnimatorView____c__DisplayClass25_0(__PhotonAnimatorView____c__DisplayClass25_0 const&) = delete;

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::__PhotonAnimatorView____c__DisplayClass25_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::__PhotonAnimatorView____c__DisplayClass25_0, ___name) == 0x10, "Offset mismatch!");

} // namespace Photon::Pun
// Type: Photon.Pun::PhotonAnimatorView
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::Photon.Pun::PhotonAnimatorView*
class CORDL_TYPE PhotonAnimatorView : public ::Photon::Pun::MonoBehaviourPun {
public:
  // Declarations
  using ParameterType = ::Photon::Pun::__PhotonAnimatorView__ParameterType;

  using SynchronizeType = ::Photon::Pun::__PhotonAnimatorView__SynchronizeType;

  using SynchronizedLayer = ::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer;

  using SynchronizedParameter = ::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter;

  using __c__DisplayClass18_0 = ::Photon::Pun::__PhotonAnimatorView____c__DisplayClass18_0;

  using __c__DisplayClass19_0 = ::Photon::Pun::__PhotonAnimatorView____c__DisplayClass19_0;

  using __c__DisplayClass22_0 = ::Photon::Pun::__PhotonAnimatorView____c__DisplayClass22_0;

  using __c__DisplayClass23_0 = ::Photon::Pun::__PhotonAnimatorView____c__DisplayClass23_0;

  using __c__DisplayClass24_0 = ::Photon::Pun::__PhotonAnimatorView____c__DisplayClass24_0;

  using __c__DisplayClass25_0 = ::Photon::Pun::__PhotonAnimatorView____c__DisplayClass25_0;

  /// @brief Field ShowLayerWeightsInspector, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_ShowLayerWeightsInspector, put = __cordl_internal_set_ShowLayerWeightsInspector)) bool ShowLayerWeightsInspector;

  /// @brief Field ShowParameterInspector, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_ShowParameterInspector, put = __cordl_internal_set_ShowParameterInspector)) bool ShowParameterInspector;

  /// @brief Field TriggerUsageWarningDone, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_TriggerUsageWarningDone, put = __cordl_internal_set_TriggerUsageWarningDone)) bool TriggerUsageWarningDone;

  /// @brief Field m_Animator, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Animator, put = __cordl_internal_set_m_Animator))::UnityW<::UnityEngine::Animator> m_Animator;

  /// @brief Field m_LastDeserializeTime, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastDeserializeTime, put = __cordl_internal_set_m_LastDeserializeTime)) float_t m_LastDeserializeTime;

  /// @brief Field m_ReceiverPosition, offset 0x50, size 0xc
  __declspec(property(get = __cordl_internal_get_m_ReceiverPosition, put = __cordl_internal_set_m_ReceiverPosition))::UnityEngine::Vector3 m_ReceiverPosition;

  /// @brief Field m_StreamQueue, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StreamQueue, put = __cordl_internal_set_m_StreamQueue))::Photon::Pun::PhotonStreamQueue* m_StreamQueue;

  /// @brief Field m_SynchronizeLayers, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SynchronizeLayers,
                      put = __cordl_internal_set_m_SynchronizeLayers))::System::Collections::Generic::List_1<::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer*>* m_SynchronizeLayers;

  /// @brief Field m_SynchronizeParameters, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SynchronizeParameters,
                      put = __cordl_internal_set_m_SynchronizeParameters))::System::Collections::Generic::List_1<::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter*>* m_SynchronizeParameters;

  /// @brief Field m_WasSynchronizeTypeChanged, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_m_WasSynchronizeTypeChanged, put = __cordl_internal_set_m_WasSynchronizeTypeChanged)) bool m_WasSynchronizeTypeChanged;

  /// @brief Field m_raisedDiscreteTriggersCache, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_raisedDiscreteTriggersCache,
                      put = __cordl_internal_set_m_raisedDiscreteTriggersCache))::System::Collections::Generic::List_1<::StringW>* m_raisedDiscreteTriggersCache;

  /// @brief Convert operator to "::Photon::Pun::IPunObservable"
  constexpr operator ::Photon::Pun::IPunObservable*() noexcept;

  /// @brief Method Awake, addr 0x2603648, size 0x50, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CacheDiscreteTriggers, addr 0x2603afc, size 0x148, virtual false, abstract: false, final false
  inline void CacheDiscreteTriggers();

  /// @brief Method DeserializeDataContinuously, addr 0x2603c44, size 0x2f8, virtual false, abstract: false, final false
  inline void DeserializeDataContinuously();

  /// @brief Method DeserializeDataDiscretly, addr 0x2604aac, size 0x3b4, virtual false, abstract: false, final false
  inline void DeserializeDataDiscretly(::Photon::Pun::PhotonStream* stream);

  /// @brief Method DeserializeSynchronizationTypeState, addr 0x2604ff0, size 0x18c, virtual false, abstract: false, final false
  inline void DeserializeSynchronizationTypeState(::Photon::Pun::PhotonStream* stream);

  /// @brief Method DoesLayerSynchronizeTypeExist, addr 0x2603f3c, size 0xe8, virtual false, abstract: false, final false
  inline bool DoesLayerSynchronizeTypeExist(int32_t layerIndex);

  /// @brief Method DoesParameterSynchronizeTypeExist, addr 0x260402c, size 0xe8, virtual false, abstract: false, final false
  inline bool DoesParameterSynchronizeTypeExist(::StringW name);

  /// @brief Method GetLayerSynchronizeType, addr 0x260412c, size 0x120, virtual false, abstract: false, final false
  inline ::Photon::Pun::__PhotonAnimatorView__SynchronizeType GetLayerSynchronizeType(int32_t layerIndex);

  /// @brief Method GetParameterSynchronizeType, addr 0x2604254, size 0x120, virtual false, abstract: false, final false
  inline ::Photon::Pun::__PhotonAnimatorView__SynchronizeType GetParameterSynchronizeType(::StringW name);

  /// @brief Method GetSynchronizedLayers, addr 0x260411c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer*>* GetSynchronizedLayers();

  /// @brief Method GetSynchronizedParameters, addr 0x2604124, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter*>* GetSynchronizedParameters();

  static inline ::Photon::Pun::PhotonAnimatorView* New_ctor();

  /// @brief Method OnPhotonSerializeView, addr 0x260517c, size 0x13c, virtual true, abstract: false, final true
  inline void OnPhotonSerializeView(::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info);

  /// @brief Method SerializeDataContinuously, addr 0x26037d0, size 0x32c, virtual false, abstract: false, final false
  inline void SerializeDataContinuously();

  /// @brief Method SerializeDataDiscretly, addr 0x2604778, size 0x334, virtual false, abstract: false, final false
  inline void SerializeDataDiscretly(::Photon::Pun::PhotonStream* stream);

  /// @brief Method SerializeSynchronizationTypeState, addr 0x2604e60, size 0x190, virtual false, abstract: false, final false
  inline void SerializeSynchronizationTypeState(::Photon::Pun::PhotonStream* stream);

  /// @brief Method SetLayerSynchronized, addr 0x260437c, size 0x1e4, virtual false, abstract: false, final false
  inline void SetLayerSynchronized(int32_t layerIndex, ::Photon::Pun::__PhotonAnimatorView__SynchronizeType synchronizeType);

  /// @brief Method SetParameterSynchronized, addr 0x2604570, size 0x1f8, virtual false, abstract: false, final false
  inline void SetParameterSynchronized(::StringW name, ::Photon::Pun::__PhotonAnimatorView__ParameterType type, ::Photon::Pun::__PhotonAnimatorView__SynchronizeType synchronizeType);

  /// @brief Method Update, addr 0x2603698, size 0x138, virtual false, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get_ShowLayerWeightsInspector() const;

  constexpr bool& __cordl_internal_get_ShowLayerWeightsInspector();

  constexpr bool const& __cordl_internal_get_ShowParameterInspector() const;

  constexpr bool& __cordl_internal_get_ShowParameterInspector();

  constexpr bool const& __cordl_internal_get_TriggerUsageWarningDone() const;

  constexpr bool& __cordl_internal_get_TriggerUsageWarningDone();

  constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_m_Animator() const;

  constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_m_Animator();

  constexpr float_t const& __cordl_internal_get_m_LastDeserializeTime() const;

  constexpr float_t& __cordl_internal_get_m_LastDeserializeTime();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_ReceiverPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_ReceiverPosition();

  constexpr ::Photon::Pun::PhotonStreamQueue*& __cordl_internal_get_m_StreamQueue();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Pun::PhotonStreamQueue*> const& __cordl_internal_get_m_StreamQueue() const;

  constexpr ::System::Collections::Generic::List_1<::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer*>*& __cordl_internal_get_m_SynchronizeLayers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer*>*> const&
  __cordl_internal_get_m_SynchronizeLayers() const;

  constexpr ::System::Collections::Generic::List_1<::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter*>*& __cordl_internal_get_m_SynchronizeParameters();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter*>*> const&
  __cordl_internal_get_m_SynchronizeParameters() const;

  constexpr bool const& __cordl_internal_get_m_WasSynchronizeTypeChanged() const;

  constexpr bool& __cordl_internal_get_m_WasSynchronizeTypeChanged();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_raisedDiscreteTriggersCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_m_raisedDiscreteTriggersCache() const;

  constexpr void __cordl_internal_set_ShowLayerWeightsInspector(bool value);

  constexpr void __cordl_internal_set_ShowParameterInspector(bool value);

  constexpr void __cordl_internal_set_TriggerUsageWarningDone(bool value);

  constexpr void __cordl_internal_set_m_Animator(::UnityW<::UnityEngine::Animator> value);

  constexpr void __cordl_internal_set_m_LastDeserializeTime(float_t value);

  constexpr void __cordl_internal_set_m_ReceiverPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_StreamQueue(::Photon::Pun::PhotonStreamQueue* value);

  constexpr void __cordl_internal_set_m_SynchronizeLayers(::System::Collections::Generic::List_1<::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer*>* value);

  constexpr void __cordl_internal_set_m_SynchronizeParameters(::System::Collections::Generic::List_1<::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter*>* value);

  constexpr void __cordl_internal_set_m_WasSynchronizeTypeChanged(bool value);

  constexpr void __cordl_internal_set_m_raisedDiscreteTriggersCache(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x26052b8, size 0x148, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Photon::Pun::IPunObservable"
  constexpr ::Photon::Pun::IPunObservable* i___Photon__Pun__IPunObservable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhotonAnimatorView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PhotonAnimatorView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhotonAnimatorView(PhotonAnimatorView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhotonAnimatorView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhotonAnimatorView(PhotonAnimatorView const&) = delete;

  /// @brief Field TriggerUsageWarningDone, offset: 0x20, size: 0x1, def value: None
  bool ___TriggerUsageWarningDone;

  /// @brief Field m_Animator, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animator> ___m_Animator;

  /// @brief Field m_StreamQueue, offset: 0x30, size: 0x8, def value: None
  ::Photon::Pun::PhotonStreamQueue* ___m_StreamQueue;

  /// @brief Field ShowLayerWeightsInspector, offset: 0x38, size: 0x1, def value: None
  bool ___ShowLayerWeightsInspector;

  /// @brief Field ShowParameterInspector, offset: 0x39, size: 0x1, def value: None
  bool ___ShowParameterInspector;

  /// @brief Field m_SynchronizeParameters, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter*>* ___m_SynchronizeParameters;

  /// @brief Field m_SynchronizeLayers, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer*>* ___m_SynchronizeLayers;

  /// @brief Field m_ReceiverPosition, offset: 0x50, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_ReceiverPosition;

  /// @brief Field m_LastDeserializeTime, offset: 0x5c, size: 0x4, def value: None
  float_t ___m_LastDeserializeTime;

  /// @brief Field m_WasSynchronizeTypeChanged, offset: 0x60, size: 0x1, def value: None
  bool ___m_WasSynchronizeTypeChanged;

  /// @brief Field m_raisedDiscreteTriggersCache, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___m_raisedDiscreteTriggersCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::PhotonAnimatorView, 0x70>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonAnimatorView, ___TriggerUsageWarningDone) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonAnimatorView, ___m_Animator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonAnimatorView, ___m_StreamQueue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonAnimatorView, ___ShowLayerWeightsInspector) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonAnimatorView, ___ShowParameterInspector) == 0x39, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonAnimatorView, ___m_SynchronizeParameters) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonAnimatorView, ___m_SynchronizeLayers) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonAnimatorView, ___m_ReceiverPosition) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonAnimatorView, ___m_LastDeserializeTime) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonAnimatorView, ___m_WasSynchronizeTypeChanged) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonAnimatorView, ___m_raisedDiscreteTriggersCache) == 0x68, "Offset mismatch!");

} // namespace Photon::Pun
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::__PhotonAnimatorView__ParameterType, "Photon.Pun", "PhotonAnimatorView/ParameterType");
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::__PhotonAnimatorView__SynchronizeType, "Photon.Pun", "PhotonAnimatorView/SynchronizeType");
NEED_NO_BOX(::Photon::Pun::PhotonAnimatorView);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::PhotonAnimatorView*, "Photon.Pun", "PhotonAnimatorView");
NEED_NO_BOX(::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer*, "Photon.Pun", "PhotonAnimatorView/SynchronizedLayer");
NEED_NO_BOX(::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter*, "Photon.Pun", "PhotonAnimatorView/SynchronizedParameter");
NEED_NO_BOX(::Photon::Pun::__PhotonAnimatorView____c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::__PhotonAnimatorView____c__DisplayClass18_0*, "Photon.Pun", "PhotonAnimatorView/<>c__DisplayClass18_0");
NEED_NO_BOX(::Photon::Pun::__PhotonAnimatorView____c__DisplayClass19_0);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::__PhotonAnimatorView____c__DisplayClass19_0*, "Photon.Pun", "PhotonAnimatorView/<>c__DisplayClass19_0");
NEED_NO_BOX(::Photon::Pun::__PhotonAnimatorView____c__DisplayClass22_0);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::__PhotonAnimatorView____c__DisplayClass22_0*, "Photon.Pun", "PhotonAnimatorView/<>c__DisplayClass22_0");
NEED_NO_BOX(::Photon::Pun::__PhotonAnimatorView____c__DisplayClass23_0);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::__PhotonAnimatorView____c__DisplayClass23_0*, "Photon.Pun", "PhotonAnimatorView/<>c__DisplayClass23_0");
NEED_NO_BOX(::Photon::Pun::__PhotonAnimatorView____c__DisplayClass24_0);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::__PhotonAnimatorView____c__DisplayClass24_0*, "Photon.Pun", "PhotonAnimatorView/<>c__DisplayClass24_0");
NEED_NO_BOX(::Photon::Pun::__PhotonAnimatorView____c__DisplayClass25_0);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::__PhotonAnimatorView____c__DisplayClass25_0*, "Photon.Pun", "PhotonAnimatorView/<>c__DisplayClass25_0");
