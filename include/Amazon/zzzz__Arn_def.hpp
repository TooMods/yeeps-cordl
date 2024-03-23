#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Arn)
namespace Amazon {
class __Arn____c;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon {
class Arn;
}
namespace Amazon {
class __Arn____c;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Arn);
MARK_REF_PTR_T(::Amazon::__Arn____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon {
// Is value type: false
// CS Name: ::Arn::<>c*
class CORDL_TYPE __Arn____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Amazon::__Arn____c* __9;

  /// @brief Field <>9__15_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__15_0, put = setStaticF___9__15_0))::System::Func_2<char16_t, bool>* __9__15_0;

  static inline ::Amazon::__Arn____c* New_ctor();

  /// @brief Method .ctor, addr 0x21f1a5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <set_AccountId>b__15_0, addr 0x21f1a64, size 0x64, virtual false, abstract: false, final false
  inline bool _set_AccountId_b__15_0(char16_t x);

  static inline ::Amazon::__Arn____c* getStaticF___9();

  static inline ::System::Func_2<char16_t, bool>* getStaticF___9__15_0();

  static inline void setStaticF___9(::Amazon::__Arn____c* value);

  static inline void setStaticF___9__15_0(::System::Func_2<char16_t, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Arn____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Arn____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Arn____c(__Arn____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Arn____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Arn____c(__Arn____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::__Arn____c, 0x10>, "Size mismatch!");

} // namespace Amazon
// Type: Amazon::Arn
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon {
// Is value type: false
// CS Name: ::Amazon::Arn*
class CORDL_TYPE Arn : public ::System::Object {
public:
  // Declarations
  using __c = ::Amazon::__Arn____c;

  __declspec(property(get = get_AccountId, put = set_AccountId))::StringW AccountId;

  __declspec(property(get = get_Partition, put = set_Partition))::StringW Partition;

  __declspec(property(get = get_Region, put = set_Region))::StringW Region;

  __declspec(property(get = get_Resource, put = set_Resource))::StringW Resource;

  __declspec(property(get = get_Service, put = set_Service))::StringW Service;

  /// @brief Field <Partition>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Partition_k__BackingField, put = __cordl_internal_set__Partition_k__BackingField))::StringW _Partition_k__BackingField;

  /// @brief Field <Region>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Region_k__BackingField, put = __cordl_internal_set__Region_k__BackingField))::StringW _Region_k__BackingField;

  /// @brief Field <Resource>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Resource_k__BackingField, put = __cordl_internal_set__Resource_k__BackingField))::StringW _Resource_k__BackingField;

  /// @brief Field <Service>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Service_k__BackingField, put = __cordl_internal_set__Service_k__BackingField))::StringW _Service_k__BackingField;

  /// @brief Field _accountId, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__accountId, put = __cordl_internal_set__accountId))::StringW _accountId;

  /// @brief Method Equals, addr 0x21f17a8, size 0x108, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method GetHashCode, addr 0x21f18b0, size 0x148, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsArn, addr 0x21f1268, size 0x60, virtual false, abstract: false, final false
  static inline bool IsArn(::StringW arn);

  static inline ::Amazon::Arn* New_ctor();

  /// @brief Method Parse, addr 0x21f137c, size 0x29c, virtual false, abstract: false, final false
  static inline ::Amazon::Arn* Parse(::StringW arnString);

  /// @brief Method ToString, addr 0x21f1670, size 0x138, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryParse, addr 0x21f12c8, size 0xb4, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW arnString, ByRef<::Amazon::Arn*> arn);

  constexpr ::StringW const& __cordl_internal_get__Partition_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Partition_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Region_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Region_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Resource_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Resource_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Service_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Service_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__accountId() const;

  constexpr ::StringW& __cordl_internal_get__accountId();

  constexpr void __cordl_internal_set__Partition_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Region_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Resource_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Service_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__accountId(::StringW value);

  /// @brief Method .ctor, addr 0x21f1618, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AccountId, addr 0x21f1094, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AccountId();

  /// @brief Method get_Partition, addr 0x21f1064, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Partition();

  /// @brief Method get_Region, addr 0x21f1084, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Region();

  /// @brief Method get_Resource, addr 0x21f1258, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Resource();

  /// @brief Method get_Service, addr 0x21f1074, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Service();

  /// @brief Method set_AccountId, addr 0x21f109c, size 0x1bc, virtual false, abstract: false, final false
  inline void set_AccountId(::StringW value);

  /// @brief Method set_Partition, addr 0x21f106c, size 0x8, virtual false, abstract: false, final false
  inline void set_Partition(::StringW value);

  /// @brief Method set_Region, addr 0x21f108c, size 0x8, virtual false, abstract: false, final false
  inline void set_Region(::StringW value);

  /// @brief Method set_Resource, addr 0x21f1260, size 0x8, virtual false, abstract: false, final false
  inline void set_Resource(::StringW value);

  /// @brief Method set_Service, addr 0x21f107c, size 0x8, virtual false, abstract: false, final false
  inline void set_Service(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Arn();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Arn", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Arn(Arn&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Arn", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Arn(Arn const&) = delete;

  /// @brief Field <Partition>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Partition_k__BackingField;

  /// @brief Field <Service>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Service_k__BackingField;

  /// @brief Field <Region>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____Region_k__BackingField;

  /// @brief Field _accountId, offset: 0x28, size: 0x8, def value: None
  ::StringW ____accountId;

  /// @brief Field <Resource>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____Resource_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Arn, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Arn, ____Partition_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Arn, ____Service_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Arn, ____Region_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Arn, ____accountId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Arn, ____Resource_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace Amazon
NEED_NO_BOX(::Amazon::Arn);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Arn*, "Amazon", "Arn");
NEED_NO_BOX(::Amazon::__Arn____c);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::__Arn____c*, "Amazon", "Arn/<>c");
