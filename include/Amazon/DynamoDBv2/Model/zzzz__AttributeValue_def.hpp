#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AttributeValue)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::IO {
class MemoryStream;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::AttributeValue);
// Type: Amazon.DynamoDBv2.Model::AttributeValue
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::AttributeValue*
class CORDL_TYPE AttributeValue : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_B, put = set_B))::System::IO::MemoryStream* B;

  __declspec(property(get = get_BOOL, put = set_BOOL)) bool BOOL;

  __declspec(property(get = get_BS, put = set_BS))::System::Collections::Generic::List_1<::System::IO::MemoryStream*>* BS;

  __declspec(property(get = get_IsBOOLSet, put = set_IsBOOLSet)) bool IsBOOLSet;

  __declspec(property(get = get_IsLSet, put = set_IsLSet)) bool IsLSet;

  __declspec(property(get = get_IsMSet, put = set_IsMSet)) bool IsMSet;

  __declspec(property(get = get_L, put = set_L))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* L;

  __declspec(property(get = get_M, put = set_M))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* M;

  __declspec(property(get = get_N, put = set_N))::StringW N;

  __declspec(property(get = get_NS, put = set_NS))::System::Collections::Generic::List_1<::StringW>* NS;

  __declspec(property(get = get_S, put = set_S))::StringW S;

  __declspec(property(get = get_SS, put = set_SS))::System::Collections::Generic::List_1<::StringW>* SS;

  /// @brief Field _b, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__b, put = __cordl_internal_set__b))::System::IO::MemoryStream* _b;

  /// @brief Field _bool, offset 0x18, size 0x2
  __declspec(property(get = __cordl_internal_get__bool, put = __cordl_internal_set__bool))::System::Nullable_1<bool> _bool;

  /// @brief Field _bs, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__bs, put = __cordl_internal_set__bs))::System::Collections::Generic::List_1<::System::IO::MemoryStream*>* _bs;

  __declspec(property(get = get_NULL, put = set_NULL)) bool _cordl_NULL;

  /// @brief Field _l, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__l, put = __cordl_internal_set__l))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* _l;

  /// @brief Field _m, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__m, put = __cordl_internal_set__m))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* _m;

  /// @brief Field _n, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__n, put = __cordl_internal_set__n))::StringW _n;

  /// @brief Field _ns, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__ns, put = __cordl_internal_set__ns))::System::Collections::Generic::List_1<::StringW>* _ns;

  /// @brief Field _null, offset 0x48, size 0x2
  __declspec(property(get = __cordl_internal_get__null, put = __cordl_internal_set__null))::System::Nullable_1<bool> _null;

  /// @brief Field _s, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__s, put = __cordl_internal_set__s))::StringW _s;

  /// @brief Field _ss, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__ss, put = __cordl_internal_set__ss))::System::Collections::Generic::List_1<::StringW>* _ss;

  /// @brief Method IsSetB, addr 0x1224964, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetB();

  /// @brief Method IsSetBOOL, addr 0x1224b08, size 0x4, virtual false, abstract: false, final false
  inline bool IsSetBOOL();

  /// @brief Method IsSetBS, addr 0x1224b1c, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetBS();

  /// @brief Method IsSetL, addr 0x1224c70, size 0x4, virtual false, abstract: false, final false
  inline bool IsSetL();

  /// @brief Method IsSetM, addr 0x1224d74, size 0x4, virtual false, abstract: false, final false
  inline bool IsSetM();

  /// @brief Method IsSetN, addr 0x1224d88, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetN();

  /// @brief Method IsSetNS, addr 0x1224da8, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetNS();

  /// @brief Method IsSetNULL, addr 0x1224ea0, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetNULL();

  /// @brief Method IsSetS, addr 0x1224eec, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetS();

  /// @brief Method IsSetSS, addr 0x1224f0c, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetSS();

  static inline ::Amazon::DynamoDBv2::Model::AttributeValue* New_ctor();

  static inline ::Amazon::DynamoDBv2::Model::AttributeValue* New_ctor(::StringW s);

  static inline ::Amazon::DynamoDBv2::Model::AttributeValue* New_ctor(::System::Collections::Generic::List_1<::StringW>* ss);

  constexpr ::System::IO::MemoryStream*& __cordl_internal_get__b();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::MemoryStream*> const& __cordl_internal_get__b() const;

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__bool() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__bool();

  constexpr ::System::Collections::Generic::List_1<::System::IO::MemoryStream*>*& __cordl_internal_get__bs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::IO::MemoryStream*>*> const& __cordl_internal_get__bs() const;

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>*& __cordl_internal_get__l();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>*> const& __cordl_internal_get__l() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*& __cordl_internal_get__m();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*> const& __cordl_internal_get__m() const;

  constexpr ::StringW const& __cordl_internal_get__n() const;

  constexpr ::StringW& __cordl_internal_get__n();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__ns();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__ns() const;

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__null() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__null();

  constexpr ::StringW const& __cordl_internal_get__s() const;

  constexpr ::StringW& __cordl_internal_get__s();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__ss();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__ss() const;

  constexpr void __cordl_internal_set__b(::System::IO::MemoryStream* value);

  constexpr void __cordl_internal_set__bool(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__bs(::System::Collections::Generic::List_1<::System::IO::MemoryStream*>* value);

  constexpr void __cordl_internal_set__l(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  constexpr void __cordl_internal_set__m(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  constexpr void __cordl_internal_set__n(::StringW value);

  constexpr void __cordl_internal_set__ns(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__null(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__s(::StringW value);

  constexpr void __cordl_internal_set__ss(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x12244f8, size 0x16c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1224664, size 0x178, virtual false, abstract: false, final false
  inline void _ctor(::StringW s);

  /// @brief Method .ctor, addr 0x12247dc, size 0x178, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::StringW>* ss);

  /// @brief Method get_B, addr 0x1224954, size 0x8, virtual false, abstract: false, final false
  inline ::System::IO::MemoryStream* get_B();

  /// @brief Method get_BOOL, addr 0x1224974, size 0x3c, virtual false, abstract: false, final false
  inline bool get_BOOL();

  /// @brief Method get_BS, addr 0x1224b0c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::IO::MemoryStream*>* get_BS();

  /// @brief Method get_IsBOOLSet, addr 0x1224a18, size 0x70, virtual false, abstract: false, final false
  inline bool get_IsBOOLSet();

  /// @brief Method get_IsLSet, addr 0x1224b80, size 0x70, virtual false, abstract: false, final false
  inline bool get_IsLSet();

  /// @brief Method get_IsMSet, addr 0x1224c84, size 0x70, virtual false, abstract: false, final false
  inline bool get_IsMSet();

  /// @brief Method get_L, addr 0x1224b70, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* get_L();

  /// @brief Method get_M, addr 0x1224c74, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* get_M();

  /// @brief Method get_N, addr 0x1224d78, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_N();

  /// @brief Method get_NS, addr 0x1224d98, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_NS();

  /// @brief Method get_NULL, addr 0x1224dfc, size 0x3c, virtual false, abstract: false, final false
  inline bool get_NULL();

  /// @brief Method get_S, addr 0x1224edc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_S();

  /// @brief Method get_SS, addr 0x1224efc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_SS();

  /// @brief Method set_B, addr 0x122495c, size 0x8, virtual false, abstract: false, final false
  inline void set_B(::System::IO::MemoryStream* value);

  /// @brief Method set_BOOL, addr 0x12249b0, size 0x68, virtual false, abstract: false, final false
  inline void set_BOOL(bool value);

  /// @brief Method set_BS, addr 0x1224b14, size 0x8, virtual false, abstract: false, final false
  inline void set_BS(::System::Collections::Generic::List_1<::System::IO::MemoryStream*>* value);

  /// @brief Method set_IsBOOLSet, addr 0x1224a88, size 0x80, virtual false, abstract: false, final false
  inline void set_IsBOOLSet(bool value);

  /// @brief Method set_IsLSet, addr 0x1224bf0, size 0x80, virtual false, abstract: false, final false
  inline void set_IsLSet(bool value);

  /// @brief Method set_IsMSet, addr 0x1224cf4, size 0x80, virtual false, abstract: false, final false
  inline void set_IsMSet(bool value);

  /// @brief Method set_L, addr 0x1224b78, size 0x8, virtual false, abstract: false, final false
  inline void set_L(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  /// @brief Method set_M, addr 0x1224c7c, size 0x8, virtual false, abstract: false, final false
  inline void set_M(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  /// @brief Method set_N, addr 0x1224d80, size 0x8, virtual false, abstract: false, final false
  inline void set_N(::StringW value);

  /// @brief Method set_NS, addr 0x1224da0, size 0x8, virtual false, abstract: false, final false
  inline void set_NS(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_NULL, addr 0x1224e38, size 0x68, virtual false, abstract: false, final false
  inline void set_NULL(bool value);

  /// @brief Method set_S, addr 0x1224ee4, size 0x8, virtual false, abstract: false, final false
  inline void set_S(::StringW value);

  /// @brief Method set_SS, addr 0x1224f04, size 0x8, virtual false, abstract: false, final false
  inline void set_SS(::System::Collections::Generic::List_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AttributeValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AttributeValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AttributeValue(AttributeValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AttributeValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AttributeValue(AttributeValue const&) = delete;

  /// @brief Field _b, offset: 0x10, size: 0x8, def value: None
  ::System::IO::MemoryStream* ____b;

  /// @brief Field _bool, offset: 0x18, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____bool;

  /// @brief Field _bs, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::IO::MemoryStream*>* ____bs;

  /// @brief Field _l, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* ____l;

  /// @brief Field _m, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* ____m;

  /// @brief Field _n, offset: 0x38, size: 0x8, def value: None
  ::StringW ____n;

  /// @brief Field _ns, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____ns;

  /// @brief Field _null, offset: 0x48, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____null;

  /// @brief Field _s, offset: 0x50, size: 0x8, def value: None
  ::StringW ____s;

  /// @brief Field _ss, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____ss;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::AttributeValue, 0x60>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::AttributeValue, ____b) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::AttributeValue, ____bool) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::AttributeValue, ____bs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::AttributeValue, ____l) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::AttributeValue, ____m) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::AttributeValue, ____n) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::AttributeValue, ____ns) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::AttributeValue, ____null) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::AttributeValue, ____s) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::AttributeValue, ____ss) == 0x58, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::AttributeValue);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::AttributeValue*, "Amazon.DynamoDBv2.Model", "AttributeValue");
