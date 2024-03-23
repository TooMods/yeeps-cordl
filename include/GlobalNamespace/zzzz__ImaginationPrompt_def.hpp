#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ImaginationPrompt_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ImaginationPrompt)
namespace GlobalNamespace {
struct __ImaginationPrompt__ActionType;
}
namespace GlobalNamespace {
class __ImaginationPrompt__OnActionTaken;
}
namespace GlobalNamespace {
struct __ImaginationPrompt__Type;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct __ImaginationPrompt__ActionType;
}
namespace GlobalNamespace {
struct __ImaginationPrompt__Type;
}
namespace GlobalNamespace {
class ImaginationPrompt;
}
namespace GlobalNamespace {
class __ImaginationPrompt__OnActionTaken;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__ImaginationPrompt__ActionType);
MARK_VAL_T(::GlobalNamespace::__ImaginationPrompt__Type);
MARK_REF_PTR_T(::GlobalNamespace::ImaginationPrompt);
MARK_REF_PTR_T(::GlobalNamespace::__ImaginationPrompt__OnActionTaken);
// Type: ::Type
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ImaginationPrompt::Type
struct CORDL_TYPE __ImaginationPrompt__Type {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ImaginationPrompt__Type_Unwrapped
  enum struct ____ImaginationPrompt__Type_Unwrapped : int32_t {
    __E_log = static_cast<int32_t>(0x0),
    __E_warning = static_cast<int32_t>(0x1),
    __E_error = static_cast<int32_t>(0x2),
    __E_vote = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ImaginationPrompt__Type_Unwrapped() const noexcept {
    return static_cast<____ImaginationPrompt__Type_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ImaginationPrompt__Type();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ImaginationPrompt__Type(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field error value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__ImaginationPrompt__Type const error;

  /// @brief Field log value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__ImaginationPrompt__Type const log;

  /// @brief Field vote value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__ImaginationPrompt__Type const vote;

  /// @brief Field warning value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__ImaginationPrompt__Type const warning;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ImaginationPrompt__Type, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ImaginationPrompt__Type, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ActionType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ImaginationPrompt::ActionType
struct CORDL_TYPE __ImaginationPrompt__ActionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ImaginationPrompt__ActionType_Unwrapped
  enum struct ____ImaginationPrompt__ActionType_Unwrapped : int32_t {
    __E_dismiss = static_cast<int32_t>(0x0),
    __E_voteNo = static_cast<int32_t>(0x1),
    __E_voteYes = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ImaginationPrompt__ActionType_Unwrapped() const noexcept {
    return static_cast<____ImaginationPrompt__ActionType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ImaginationPrompt__ActionType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ImaginationPrompt__ActionType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field dismiss value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__ImaginationPrompt__ActionType const dismiss;

  /// @brief Field voteNo value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__ImaginationPrompt__ActionType const voteNo;

  /// @brief Field voteYes value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__ImaginationPrompt__ActionType const voteYes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ImaginationPrompt__ActionType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ImaginationPrompt__ActionType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OnActionTaken
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ImaginationPrompt::OnActionTaken*
class CORDL_TYPE __ImaginationPrompt__OnActionTaken : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1549378, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::__ImaginationPrompt__ActionType actionType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x15493fc, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1549364, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::__ImaginationPrompt__ActionType actionType);

  static inline ::GlobalNamespace::__ImaginationPrompt__OnActionTaken* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x15449d4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ImaginationPrompt__OnActionTaken();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ImaginationPrompt__OnActionTaken", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ImaginationPrompt__OnActionTaken(__ImaginationPrompt__OnActionTaken&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ImaginationPrompt__OnActionTaken", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ImaginationPrompt__OnActionTaken(__ImaginationPrompt__OnActionTaken const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ImaginationPrompt__OnActionTaken, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ImaginationPrompt
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ImaginationPrompt*
class CORDL_TYPE ImaginationPrompt : public ::System::Object {
public:
  // Declarations
  using ActionType = ::GlobalNamespace::__ImaginationPrompt__ActionType;

  using OnActionTaken = ::GlobalNamespace::__ImaginationPrompt__OnActionTaken;

  using Type = ::GlobalNamespace::__ImaginationPrompt__Type;

  /// @brief Field actions, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_actions,
                      put = __cordl_internal_set_actions))::ArrayW<::GlobalNamespace::__ImaginationPrompt__ActionType, ::Array<::GlobalNamespace::__ImaginationPrompt__ActionType>*> actions;

  /// @brief Field message, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_message, put = __cordl_internal_set_message))::StringW message;

  /// @brief Field onActionTaken, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_onActionTaken, put = __cordl_internal_set_onActionTaken))::GlobalNamespace::__ImaginationPrompt__OnActionTaken* onActionTaken;

  /// @brief Field type, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type))::GlobalNamespace::__ImaginationPrompt__Type type;

  /// @brief Field userID, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_userID, put = __cordl_internal_set_userID))::StringW userID;

  /// @brief Method CreateVote, addr 0x1544a98, size 0xd0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::ImaginationPrompt* CreateVote(::StringW message, ::StringW userID, ::GlobalNamespace::__ImaginationPrompt__OnActionTaken* onActionTaken);

  static inline ::GlobalNamespace::ImaginationPrompt* New_ctor(::StringW message, ::GlobalNamespace::__ImaginationPrompt__Type type);

  static inline ::GlobalNamespace::ImaginationPrompt* New_ctor(::StringW message, ::GlobalNamespace::__ImaginationPrompt__Type type, ::StringW userID);

  static inline ::GlobalNamespace::ImaginationPrompt* New_ctor(::StringW message, ::GlobalNamespace::__ImaginationPrompt__Type type, ::StringW userID,
                                                               ::ArrayW<::GlobalNamespace::__ImaginationPrompt__ActionType, ::Array<::GlobalNamespace::__ImaginationPrompt__ActionType>*> actions,
                                                               ::GlobalNamespace::__ImaginationPrompt__OnActionTaken* onActionTaken);

  constexpr ::ArrayW<::GlobalNamespace::__ImaginationPrompt__ActionType, ::Array<::GlobalNamespace::__ImaginationPrompt__ActionType>*> const& __cordl_internal_get_actions() const;

  constexpr ::ArrayW<::GlobalNamespace::__ImaginationPrompt__ActionType, ::Array<::GlobalNamespace::__ImaginationPrompt__ActionType>*>& __cordl_internal_get_actions();

  constexpr ::StringW const& __cordl_internal_get_message() const;

  constexpr ::StringW& __cordl_internal_get_message();

  constexpr ::GlobalNamespace::__ImaginationPrompt__OnActionTaken*& __cordl_internal_get_onActionTaken();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ImaginationPrompt__OnActionTaken*> const& __cordl_internal_get_onActionTaken() const;

  constexpr ::GlobalNamespace::__ImaginationPrompt__Type const& __cordl_internal_get_type() const;

  constexpr ::GlobalNamespace::__ImaginationPrompt__Type& __cordl_internal_get_type();

  constexpr ::StringW const& __cordl_internal_get_userID() const;

  constexpr ::StringW& __cordl_internal_get_userID();

  constexpr void __cordl_internal_set_actions(::ArrayW<::GlobalNamespace::__ImaginationPrompt__ActionType, ::Array<::GlobalNamespace::__ImaginationPrompt__ActionType>*> value);

  constexpr void __cordl_internal_set_message(::StringW value);

  constexpr void __cordl_internal_set_onActionTaken(::GlobalNamespace::__ImaginationPrompt__OnActionTaken* value);

  constexpr void __cordl_internal_set_type(::GlobalNamespace::__ImaginationPrompt__Type value);

  constexpr void __cordl_internal_set_userID(::StringW value);

  /// @brief Method .ctor, addr 0x1540784, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::GlobalNamespace::__ImaginationPrompt__Type type);

  /// @brief Method .ctor, addr 0x15492e0, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::GlobalNamespace::__ImaginationPrompt__Type type, ::StringW userID);

  /// @brief Method .ctor, addr 0x154928c, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::GlobalNamespace::__ImaginationPrompt__Type type, ::StringW userID,
                    ::ArrayW<::GlobalNamespace::__ImaginationPrompt__ActionType, ::Array<::GlobalNamespace::__ImaginationPrompt__ActionType>*> actions,
                    ::GlobalNamespace::__ImaginationPrompt__OnActionTaken* onActionTaken);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ImaginationPrompt();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ImaginationPrompt", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ImaginationPrompt(ImaginationPrompt&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ImaginationPrompt", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ImaginationPrompt(ImaginationPrompt const&) = delete;

  /// @brief Field message, offset: 0x10, size: 0x8, def value: None
  ::StringW ___message;

  /// @brief Field type, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__ImaginationPrompt__Type ___type;

  /// @brief Field userID, offset: 0x20, size: 0x8, def value: None
  ::StringW ___userID;

  /// @brief Field actions, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__ImaginationPrompt__ActionType, ::Array<::GlobalNamespace::__ImaginationPrompt__ActionType>*> ___actions;

  /// @brief Field onActionTaken, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__ImaginationPrompt__OnActionTaken* ___onActionTaken;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ImaginationPrompt, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationPrompt, ___message) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationPrompt, ___type) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationPrompt, ___userID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationPrompt, ___actions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationPrompt, ___onActionTaken) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ImaginationPrompt__ActionType, "", "ImaginationPrompt/ActionType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ImaginationPrompt__Type, "", "ImaginationPrompt/Type");
NEED_NO_BOX(::GlobalNamespace::ImaginationPrompt);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ImaginationPrompt*, "", "ImaginationPrompt");
NEED_NO_BOX(::GlobalNamespace::__ImaginationPrompt__OnActionTaken);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ImaginationPrompt__OnActionTaken*, "", "ImaginationPrompt/OnActionTaken");
